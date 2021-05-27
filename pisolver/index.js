module.exports = async function calcPi(digits, numStr){
        if (!digits) return "The number of digits must be a number!";
        if (Number(digits).toString().toLowerCase() === "nan") return "The number of digits must be a number!"
        let result = await pi_chudnovsky(Number(digits));
        //console.log(result)
        if (!numStr) return result.toString();
        if (numStr.toString() === "true"){
        return (result)
        }else{
            return (result.toString())
        }
    function pi_chudnovsky(digits){
        //Calculate pi using Chudnovsky's series
        //This calculates it in fixed point
       one = 0n;
       one = 10n**(BigInt(digits)+20n);
        k = 1n;
        a_k = one;
        a_sum = one;
        b_sum = 0n;
        C = 640320n;
        C3_OVER_24 = (C*C*C) / 24n; 
        while (1){
          a_k *= -(6n*k-5n)*(2n*k-1n)*(6n*k-1n);
          a_k /= k*k*k*C3_OVER_24;
          a_sum += a_k;
          b_sum += k * a_k;
          k += 1n;
          if (a_k == 0n)
              break;
          }
          total = 13591409n*a_sum + 545140134n*b_sum;
      
          [x,y] = pell_sqrt_10005( digits );
          hexdigits = Math.floor(digits/1.20411998266)
          hexchars = (426880n*x*one*(16n**(BigInt(hexdigits)+20n))) / (total*y);
          pi = (426880n*x*one*one) / (total*y);
          return pi;
      }
      function pell_sqrt_10005(digits){
            // rational approximation to sqrt(10005) using pell equation
            // use the previous 2 solutions to form the next solution in a Fibonacci style sequence
            // so the values of x,y increase by a factor of approx. the golden ratio each iteration
            D=10005n;
            [x1,y1] = [1n,0n];
            [x2,y2] = [4001n,40n];
            y_target = 10n**(BigInt(digits/2 + 5));
    
            while (1){
                    [x,y] = [x1*x2 + D*y1*y2, x1*y2 + y1*x2];
                    if ( y > y_target)
                            return [x,y];
    
                    [x1,y1] = [x2,y2];
                    [x2,y2] = [x,y];
            }
    }
    }
