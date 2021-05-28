 module.exports = async function arrayToObject(array, element){
              if (!array||Array.isArray(array) === false) {     
                return "I didn't get a vaild array";
                };
              if (array.toString() === "[object Promise]"){
                return "I got a pending promise that was not fulfilled yet"
              }
        if (!element){ 
              return "I didn't get a key field to reduce it to.";
        }
        const arrayToObject = (array, keyField) =>
        array.reduce((obj, item) => {
          obj[item[keyField]] = item;
          return obj;
        }, {})
        let result = await arrayToObject(array, element);
        if (result.undefined) return "The key that you input probably isn't valid"
        return result;
}
