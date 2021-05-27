import numpy as np
import sys
import cv2 as cv
def show_wait_destroy(winname, img):
    cv.imshow(winname, img)
    cv.moveWindow(winname, 500, 0)
    cv.waitKey(0)
    cv.destroyWindow(winname)

def create_blank(width, height, rgb_color=(0, 0, 0)):
    """Create new image(numpy array) filled with certain color in RGB"""
    # Create black blank image
    image = np.zeros((height, width, 3), np.uint8)

    # Since OpenCV uses BGR, convert the color first
    color = tuple(reversed(rgb_color))
    # Fill image with color
    image[:] = color

    return image

def main(argv):
    # [load_image]
    # Check number of arguments
    if len(argv) < 1:
        print ('Not enough parameters')
        print ('Usage:\nmorph_lines_detection.py < path_to_image >')
        return -1
    # Load the image
    src = cv.imread(argv[0], cv.IMREAD_COLOR)
    # Check if image is loaded fine
    if src is None:
        print ('Error opening image: ' + argv[0])
        return -1
    # Show source image
    # cv.imshow("src", src)
    # [load_image]
    # [gray]
    # Transform source image to gray if it is not already
    if len(src.shape) != 2:
        gray = cv.cvtColor(src, cv.COLOR_BGR2GRAY)
    else:
        gray = src
    # [gray]
    # [bin]
    # Apply adaptiveThreshold at the bitwise_not of gray, notice the ~ symbol
    gray = cv.bitwise_not(gray)
    bw = cv.adaptiveThreshold(gray, 255, cv.ADAPTIVE_THRESH_MEAN_C, cv.THRESH_BINARY, 15, -20)
    # Create the images that will use to extract the horizontal and vertical lines
    horizontal = np.copy(bw)
    # [init]
    # [horiz]
    # Specify size on horizontal axis
    cols = horizontal.shape[1]
    horizontal_size = cols // 30
    # Create structure element for extracting horizontal lines through morphology operations
    horizontalStructure = cv.getStructuringElement(cv.MORPH_RECT, (horizontal_size, 1))
    # Apply morphology operations
    horizontal = cv.erode(horizontal, horizontalStructure)
    horizontal = cv.dilate(horizontal, horizontalStructure)
    # Show horizontal lines ontop of normal image (take away)
    dst = cv.bitwise_not(gray,gray,mask=horizontal)
    dst = cv.bitwise_not(dst)
    show_wait_destroy("combined", dst)
    cv.imwrite("takenaway.png", dst)
    horizontal = cv.bitwise_not(horizontal)
    show_wait_destroy("just_horizontal", horizontal)
    cv.imwrite("justlines.png", horizontal)

    width1, height1 = 300, 300
    height1, width1 = horizontal.shape

    red = (0, 0, 0)
    img1 = create_blank(width1, height1, rgb_color=red)

    #gray1 = cv.cvtColor(img1,cv.COLOR_BGR2GRAY)
    #gray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
    edges = cv.Canny(horizontal,50,150,apertureSize = 3)
    minLineLength = 5000
    maxLineGap = 100
    lines = cv.HoughLinesP(edges,1,1*np.pi/180,50,minLineLength,maxLineGap)
    for line in lines:    
        for x1,y1,x2,y2 in line:
            cv.line(img1,(x1,y1),(x2,y2),(0,255,0),2)

    
    #show_wait_destroy("img1", img1)
    
    # [horiz]
    # [vert]
    return 0
if __name__ == "__main__":
    main(sys.argv[1:])
