var sourceLang = window.sourceLang || "en";
var targetLang = window.targetLang || "zh";

   var init = async function(){
      sourceLang = window.sourceLang || "en";
      targetLang = window.targetLang || "zh";

      var A = document.querySelectorAll("a");
     var P = document.querySelectorAll("p");
     var SPAN = document.querySelectorAll("span");
     var H1 = document.querySelectorAll("h1");
     var H2 = document.querySelectorAll("h2");
     var H3 = document.querySelectorAll("h3");
     var H4 = document.querySelectorAll("h4");
     var H5 = document.querySelectorAll("h5");
     var H6 = document.querySelectorAll("h6");



  for (var i = 0, max = A.length; i < max; i++) {
     let element = A[i];
     if (element.innerText === "" || !element.innerText.replace(/\s/g, '').length || element.innerText.replace(/\s/g, '').length === 0) continue; 
     translate(element)
  }

  for (var i = 0, max = SPAN.length; i < max; i++) {
     let element = SPAN[i];
     console.log(element)
     if (element.innerText === "" || !element.innerText.replace(/\s/g, '').length || element.innerText.replace(/\s/g, '').length === 0) continue; 
     translate(element)
  }

  for (var i = 0, max = P.length; i < max; i++) {
     let element = P[i];
     if (element.innerText === "" || !element.innerText.replace(/\s/g, '').length || element.innerText.replace(/\s/g, '').length === 0) continue; 
     translate(element)
  }
  for (var i = 0, max = H1.length; i < max; i++) {
     let element = H1[i];
     if (element.innerText === "" || !element.innerText.replace(/\s/g, '').length || element.innerText.replace(/\s/g, '').length === 0) continue; 
     translate(element)
  }
  for (var i = 0, max = H2.length; i < max; i++) {
     let element = H2[i];
     if (element.innerText === "" || !element.innerText.replace(/\s/g, '').length || element.innerText.replace(/\s/g, '').length === 0) continue; 
     translate(element)
  }
  for (var i = 0, max = H3.length; i < max; i++) {
     let element = H3[i];
     if (element.innerText === "" || !element.innerText.replace(/\s/g, '').length || element.innerText.replace(/\s/g, '').length === 0) continue; 
     translate(element)
  }
  for (var i = 0, max = H4.length; i < max; i++) {
     let element = H4[i];
     if (element.innerText === "" || !element.innerText.replace(/\s/g, '').length || element.innerText.replace(/\s/g, '').length === 0) continue; 
     translate(element)
  }
  for (var i = 0, max = H5.length; i < max; i++) {
     let element = H5[i];
     if (element.innerText === "" || !element.innerText.replace(/\s/g, '').length || element.innerText.replace(/\s/g, '').length === 0) continue; 
     translate(element)
  }
  for (var i = 0, max = H6.length; i < max; i++) {
     let element = H6[i];
     if (element.innerText === "" || !element.innerText.replace(/\s/g, '').length || element.innerText.replace(/\s/g, '').length === 0) continue; 
     translate(element)
  }


   }
   function translate(element){
      fetch("https://translate.astian.org/translate", {
         method: "POST",
         body: JSON.stringify({
            q: element.innerText,
            source: sourceLang,
            target: targetLang
         }),
         headers: { "Content-Type": "application/json" }
      }).then(result => result.json()).then(text => {
         element.innerText = text.translatedText;
      })
   }
   window.init = init;
