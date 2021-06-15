# Insta Translate

  `npm i instatranslate`
  
  This page translater is extremely easy to use. To install it, either use NPM to install it to your root project directory, or use a CDN to import it into your project.
  `<script src="/path/to/package"></script>`
And thats it! By default, the language of choice is from EN (english) to ZH (Chinese) but this can be changed easily in the `window.sourceLang` and `window.targetLang` variables. Simply Change these before you include the package, call the package, and you're set! 

the window.init() function can be run at any time to refresh the page data if some data changed.

## Example

```html
<script>
    window.sourceLang = "en";
    window.targetLang = "ru";
</script>

<script src="https://cdn.jsdelivr.net/npm/instatranslate@latest/index.min.js"></script>

<script>
    window.init();
</script>
```

## Supported languages


|Country code (Use this)| Country Name |
|--|--|
|en|English|
| ar | Arabic |
| zh| Chinese |
|fr|French|
|de|German|
|hi|Hindi|
|id|Indonesian|
|ga|Irish|
|it|Italian|
|ja|Japanese|
|ko|Korean|
|pl|Polish|
|pt|Portugeuse|
|ru|Russian|
|es|Spanish|
|tr|Turkish|
|vi|Vietmanese|
