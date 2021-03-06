const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html lang="en">
  <head>
      <meta charset="UTF-8">
      <meta http-equiv="X-UA-Compatible" content="IE=edge">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title> Kontrollpanel </title>
      <script>
   /**
   * Swiper 8.2.4
   * Most modern mobile touch slider and framework with hardware accelerated transitions
   * https://swiperjs.com
   *
   * Copyright 2014-2022 Vladimir Kharlampidi
   *
   * Released under the MIT License
   *
   * Released on: June 13, 2022
   */
  !function(e,t){"object"==typeof exports&&"undefined"!=typeof module?module.exports=t():"function"==typeof define&&define.amd?define(t):(e="undefined"!=typeof globalThis?globalThis:e||self).Swiper=t()}(this,(function(){"use strict";function e(e){return null!==e&&"object"==typeof e&&"constructor"in e&&e.constructor===Object}function t(s,a){void 0===s&&(s={}),void 0===a&&(a={}),Object.keys(a).forEach((i=>{void 0===s[i]?s[i]=a[i]:e(a[i])&&e(s[i])&&Object.keys(a[i]).length>0&&t(s[i],a[i])}))}const s={body:{},addEventListener(){},removeEventListener(){},activeElement:{blur(){},nodeName:""},querySelector:()=>null,querySelectorAll:()=>[],getElementById:()=>null,createEvent:()=>({initEvent(){}}),createElement:()=>({children:[],childNodes:[],style:{},setAttribute(){},getElementsByTagName:()=>[]}),createElementNS:()=>({}),importNode:()=>null,location:{hash:"",host:"",hostname:"",href:"",origin:"",pathname:"",protocol:"",search:""}};function a(){const e="undefined"!=typeof document?document:{};return t(e,s),e}const i={document:s,navigator:{userAgent:""},location:{hash:"",host:"",hostname:"",href:"",origin:"",pathname:"",protocol:"",search:""},history:{replaceState(){},pushState(){},go(){},back(){}},CustomEvent:function(){return this},addEventListener(){},removeEventListener(){},getComputedStyle:()=>({getPropertyValue:()=>""}),Image(){},Date(){},screen:{},setTimeout(){},clearTimeout(){},matchMedia:()=>({}),requestAnimationFrame:e=>"undefined"==typeof setTimeout?(e(),null):setTimeout(e,0),cancelAnimationFrame(e){"undefined"!=typeof setTimeout&&clearTimeout(e)}};function r(){const e="undefined"!=typeof window?window:{};return t(e,i),e}class n extends Array{constructor(e){"number"==typeof e?super(e):(super(...e||[]),function(e){const t=e.__proto__;Object.defineProperty(e,"__proto__",{get:()=>t,set(e){t.__proto__=e}})}(this))}}function l(e){void 0===e&&(e=[]);const t=[];return e.forEach((e=>{Array.isArray(e)?t.push(...l(e)):t.push(e)})),t}function o(e,t){return Array.prototype.filter.call(e,t)}function d(e,t){const s=r(),i=a();let l=[];if(!t&&e instanceof n)return e;if(!e)return new n(l);if("string"==typeof e){const s=e.trim();if(s.indexOf("<")>=0&&s.indexOf(">")>=0){let e="div";0===s.indexOf("<li")&&(e="ul"),0===s.indexOf("<tr")&&(e="tbody"),0!==s.indexOf("<td")&&0!==s.indexOf("<th")||(e="tr"),0===s.indexOf("<tbody")&&(e="table"),0===s.indexOf("<option")&&(e="select");const t=i.createElement(e);t.innerHTML=s;for(let e=0;e<t.childNodes.length;e+=1)l.push(t.childNodes[e])}else l=function(e,t){if("string"!=typeof e)return[e];const s=[],a=t.querySelectorAll(e);for(let e=0;e<a.length;e+=1)s.push(a[e]);return s}(e.trim(),t||i)}else if(e.nodeType||e===s||e===i)l.push(e);else if(Array.isArray(e)){if(e instanceof n)return e;l=e}return new n(function(e){const t=[];for(let s=0;s<e.length;s+=1)-1===t.indexOf(e[s])&&t.push(e[s]);return t}(l))}d.fn=n.prototype;const c={addClass:function(){for(var e=arguments.length,t=new Array(e),s=0;s<e;s++)t[s]=arguments[s];const a=l(t.map((e=>e.split(" "))));return this.forEach((e=>{e.classList.add(...a)})),this},removeClass:function(){for(var e=arguments.length,t=new Array(e),s=0;s<e;s++)t[s]=arguments[s];const a=l(t.map((e=>e.split(" "))));return this.forEach((e=>{e.classList.remove(...a)})),this},hasClass:function(){for(var e=arguments.length,t=new Array(e),s=0;s<e;s++)t[s]=arguments[s];const a=l(t.map((e=>e.split(" "))));return o(this,(e=>a.filter((t=>e.classList.contains(t))).length>0)).length>0},toggleClass:function(){for(var e=arguments.length,t=new Array(e),s=0;s<e;s++)t[s]=arguments[s];const a=l(t.map((e=>e.split(" "))));this.forEach((e=>{a.forEach((t=>{e.classList.toggle(t)}))}))},attr:function(e,t){if(1===arguments.length&&"string"==typeof e)return this[0]?this[0].getAttribute(e):void 0;for(let s=0;s<this.length;s+=1)if(2===arguments.length)this[s].setAttribute(e,t);else for(const t in e)this[s][t]=e[t],this[s].setAttribute(t,e[t]);return this},removeAttr:function(e){for(let t=0;t<this.length;t+=1)this[t].removeAttribute(e);return this},transform:function(e){for(let t=0;t<this.length;t+=1)this[t].style.transform=e;return this},transition:function(e){for(let t=0;t<this.length;t+=1)this[t].style.transitionDuration="string"!=typeof e?`${e}ms`:e;return this},on:function(){for(var e=arguments.length,t=new Array(e),s=0;s<e;s++)t[s]=arguments[s];let[a,i,r,n]=t;function l(e){const t=e.target;if(!t)return;const s=e.target.dom7EventData||[];if(s.indexOf(e)<0&&s.unshift(e),d(t).is(i))r.apply(t,s);else{const e=d(t).parents();for(let t=0;t<e.length;t+=1)d(e[t]).is(i)&&r.apply(e[t],s)}}function o(e){const t=e&&e.target&&e.target.dom7EventData||[];t.indexOf(e)<0&&t.unshift(e),r.apply(this,t)}"function"==typeof t[1]&&([a,r,n]=t,i=void 0),n||(n=!1);const c=a.split(" ");let p;for(let e=0;e<this.length;e+=1){const t=this[e];if(i)for(p=0;p<c.length;p+=1){const e=c[p];t.dom7LiveListeners||(t.dom7LiveListeners={}),t.dom7LiveListeners[e]||(t.dom7LiveListeners[e]=[]),t.dom7LiveListeners[e].push({listener:r,proxyListener:l}),t.addEventListener(e,l,n)}else for(p=0;p<c.length;p+=1){const e=c[p];t.dom7Listeners||(t.dom7Listeners={}),t.dom7Listeners[e]||(t.dom7Listeners[e]=[]),t.dom7Listeners[e].push({listener:r,proxyListener:o}),t.addEventListener(e,o,n)}}return this},off:function(){for(var e=arguments.length,t=new Array(e),s=0;s<e;s++)t[s]=arguments[s];let[a,i,r,n]=t;"function"==typeof t[1]&&([a,r,n]=t,i=void 0),n||(n=!1);const l=a.split(" ");for(let e=0;e<l.length;e+=1){const t=l[e];for(let e=0;e<this.length;e+=1){const s=this[e];let a;if(!i&&s.dom7Listeners?a=s.dom7Listeners[t]:i&&s.dom7LiveListeners&&(a=s.dom7LiveListeners[t]),a&&a.length)for(let e=a.length-1;e>=0;e-=1){const i=a[e];r&&i.listener===r||r&&i.listener&&i.listener.dom7proxy&&i.listener.dom7proxy===r?(s.removeEventListener(t,i.proxyListener,n),a.splice(e,1)):r||(s.removeEventListener(t,i.proxyListener,n),a.splice(e,1))}}}return this},trigger:function(){const e=r();for(var t=arguments.length,s=new Array(t),a=0;a<t;a++)s[a]=arguments[a];const i=s[0].split(" "),n=s[1];for(let t=0;t<i.length;t+=1){const a=i[t];for(let t=0;t<this.length;t+=1){const i=this[t];if(e.CustomEvent){const t=new e.CustomEvent(a,{detail:n,bubbles:!0,cancelable:!0});i.dom7EventData=s.filter(((e,t)=>t>0)),i.dispatchEvent(t),i.dom7EventData=[],delete i.dom7EventData}}}return this},transitionEnd:function(e){const t=this;return e&&t.on("transitionend",(function s(a){a.target===this&&(e.call(this,a),t.off("transitionend",s))})),this},outerWidth:function(e){if(this.length>0){if(e){const e=this.styles();return this[0].offsetWidth+parseFloat(e.getPropertyValue("margin-right"))+parseFloat(e.getPropertyValue("margin-left"))}return this[0].offsetWidth}return null},outerHeight:function(e){if(this.length>0){if(e){const e=this.styles();return this[0].offsetHeight+parseFloat(e.getPropertyValue("margin-top"))+parseFloat(e.getPropertyValue("margin-bottom"))}return this[0].offsetHeight}return null},styles:function(){const e=r();return this[0]?e.getComputedStyle(this[0],null):{}},offset:function(){if(this.length>0){const e=r(),t=a(),s=this[0],i=s.getBoundingClientRect(),n=t.body,l=s.clientTop||n.clientTop||0,o=s.clientLeft||n.clientLeft||0,d=s===e?e.scrollY:s.scrollTop,c=s===e?e.scrollX:s.scrollLeft;return{top:i.top+d-l,left:i.left+c-o}}return null},css:function(e,t){const s=r();let a;if(1===arguments.length){if("string"!=typeof e){for(a=0;a<this.length;a+=1)for(const t in e)this[a].style[t]=e[t];return this}if(this[0])return s.getComputedStyle(this[0],null).getPropertyValue(e)}if(2===arguments.length&&"string"==typeof e){for(a=0;a<this.length;a+=1)this[a].style[e]=t;return this}return this},each:function(e){return e?(this.forEach(((t,s)=>{e.apply(t,[t,s])})),this):this},html:function(e){if(void 0===e)return this[0]?this[0].innerHTML:null;for(let t=0;t<this.length;t+=1)this[t].innerHTML=e;return this},text:function(e){if(void 0===e)return this[0]?this[0].textContent.trim():null;for(let t=0;t<this.length;t+=1)this[t].textContent=e;return this},is:function(e){const t=r(),s=a(),i=this[0];let l,o;if(!i||void 0===e)return!1;if("string"==typeof e){if(i.matches)return i.matches(e);if(i.webkitMatchesSelector)return i.webkitMatchesSelector(e);if(i.msMatchesSelector)return i.msMatchesSelector(e);for(l=d(e),o=0;o<l.length;o+=1)if(l[o]===i)return!0;return!1}if(e===s)return i===s;if(e===t)return i===t;if(e.nodeType||e instanceof n){for(l=e.nodeType?[e]:e,o=0;o<l.length;o+=1)if(l[o]===i)return!0;return!1}return!1},index:function(){let e,t=this[0];if(t){for(e=0;null!==(t=t.previousSibling);)1===t.nodeType&&(e+=1);return e}},eq:function(e){if(void 0===e)return this;const t=this.length;if(e>t-1)return d([]);if(e<0){const s=t+e;return d(s<0?[]:[this[s]])}return d([this[e]])},append:function(){let e;const t=a();for(let s=0;s<arguments.length;s+=1){e=s<0||arguments.length<=s?void 0:arguments[s];for(let s=0;s<this.length;s+=1)if("string"==typeof e){const a=t.createElement("div");for(a.innerHTML=e;a.firstChild;)this[s].appendChild(a.firstChild)}else if(e instanceof n)for(let t=0;t<e.length;t+=1)this[s].appendChild(e[t]);else this[s].appendChild(e)}return this},prepend:function(e){const t=a();let s,i;for(s=0;s<this.length;s+=1)if("string"==typeof e){const a=t.createElement("div");for(a.innerHTML=e,i=a.childNodes.length-1;i>=0;i-=1)this[s].insertBefore(a.childNodes[i],this[s].childNodes[0])}else if(e instanceof n)for(i=0;i<e.length;i+=1)this[s].insertBefore(e[i],this[s].childNodes[0]);else this[s].insertBefore(e,this[s].childNodes[0]);return this},next:function(e){return this.length>0?e?this[0].nextElementSibling&&d(this[0].nextElementSibling).is(e)?d([this[0].nextElementSibling]):d([]):this[0].nextElementSibling?d([this[0].nextElementSibling]):d([]):d([])},nextAll:function(e){const t=[];let s=this[0];if(!s)return d([]);for(;s.nextElementSibling;){const a=s.nextElementSibling;e?d(a).is(e)&&t.push(a):t.push(a),s=a}return d(t)},prev:function(e){if(this.length>0){const t=this[0];return e?t.previousElementSibling&&d(t.previousElementSibling).is(e)?d([t.previousElementSibling]):d([]):t.previousElementSibling?d([t.previousElementSibling]):d([])}return d([])},prevAll:function(e){const t=[];let s=this[0];if(!s)return d([]);for(;s.previousElementSibling;){const a=s.previousElementSibling;e?d(a).is(e)&&t.push(a):t.push(a),s=a}return d(t)},parent:function(e){const t=[];for(let s=0;s<this.length;s+=1)null!==this[s].parentNode&&(e?d(this[s].parentNode).is(e)&&t.push(this[s].parentNode):t.push(this[s].parentNode));return d(t)},parents:function(e){const t=[];for(let s=0;s<this.length;s+=1){let a=this[s].parentNode;for(;a;)e?d(a).is(e)&&t.push(a):t.push(a),a=a.parentNode}return d(t)},closest:function(e){let t=this;return void 0===e?d([]):(t.is(e)||(t=t.parents(e).eq(0)),t)},find:function(e){const t=[];for(let s=0;s<this.length;s+=1){const a=this[s].querySelectorAll(e);for(let e=0;e<a.length;e+=1)t.push(a[e])}return d(t)},children:function(e){const t=[];for(let s=0;s<this.length;s+=1){const a=this[s].children;for(let s=0;s<a.length;s+=1)e&&!d(a[s]).is(e)||t.push(a[s])}return d(t)},filter:function(e){return d(o(this,e))},remove:function(){for(let e=0;e<this.length;e+=1)this[e].parentNode&&this[e].parentNode.removeChild(this[e]);return this}};function p(e,t){return void 0===t&&(t=0),setTimeout(e,t)}function u(){return Date.now()}function h(e,t){void 0===t&&(t="x");const s=r();let a,i,n;const l=function(e){const t=r();let s;return t.getComputedStyle&&(s=t.getComputedStyle(e,null)),!s&&e.currentStyle&&(s=e.currentStyle),s||(s=e.style),s}(e);return s.WebKitCSSMatrix?(i=l.transform||l.webkitTransform,i.split(",").length>6&&(i=i.split(", ").map((e=>e.replace(",","."))).join(", ")),n=new s.WebKitCSSMatrix("none"===i?"":i)):(n=l.MozTransform||l.OTransform||l.MsTransform||l.msTransform||l.transform||l.getPropertyValue("transform").replace("translate(","matrix(1, 0, 0, 1,"),a=n.toString().split(",")),"x"===t&&(i=s.WebKitCSSMatrix?n.m41:16===a.length?parseFloat(a[12]):parseFloat(a[4])),"y"===t&&(i=s.WebKitCSSMatrix?n.m42:16===a.length?parseFloat(a[13]):parseFloat(a[5])),i||0}function m(e){return"object"==typeof e&&null!==e&&e.constructor&&"Object"===Object.prototype.toString.call(e).slice(8,-1)}function f(e){return"undefined"!=typeof window&&void 0!==window.HTMLElement?e instanceof HTMLElement:e&&(1===e.nodeType||11===e.nodeType)}function g(){const e=Object(arguments.length<=0?void 0:arguments[0]),t=["__proto__","constructor","prototype"];for(let s=1;s<arguments.length;s+=1){const a=s<0||arguments.length<=s?void 0:arguments[s];if(null!=a&&!f(a)){const s=Object.keys(Object(a)).filter((e=>t.indexOf(e)<0));for(let t=0,i=s.length;t<i;t+=1){const i=s[t],r=Object.getOwnPropertyDescriptor(a,i);void 0!==r&&r.enumerable&&(m(e[i])&&m(a[i])?a[i].__swiper__?e[i]=a[i]:g(e[i],a[i]):!m(e[i])&&m(a[i])?(e[i]={},a[i].__swiper__?e[i]=a[i]:g(e[i],a[i])):e[i]=a[i])}}}return e}function v(e,t,s){e.style.setProperty(t,s)}function w(e){let{swiper:t,targetPosition:s,side:a}=e;const i=r(),n=-t.translate;let l,o=null;const d=t.params.speed;t.wrapperEl.style.scrollSnapType="none",i.cancelAnimationFrame(t.cssModeFrameID);const c=s>n?"next":"prev",p=(e,t)=>"next"===c&&e>=t||"prev"===c&&e<=t,u=()=>{l=(new Date).getTime(),null===o&&(o=l);const e=Math.max(Math.min((l-o)/d,1),0),r=.5-Math.cos(e*Math.PI)/2;let c=n+r*(s-n);if(p(c,s)&&(c=s),t.wrapperEl.scrollTo({[a]:c}),p(c,s))return t.wrapperEl.style.overflow="hidden",t.wrapperEl.style.scrollSnapType="",setTimeout((()=>{t.wrapperEl.style.overflow="",t.wrapperEl.scrollTo({[a]:c})})),void i.cancelAnimationFrame(t.cssModeFrameID);t.cssModeFrameID=i.requestAnimationFrame(u)};u()}let b,x,y;function E(){return b||(b=function(){const e=r(),t=a();return{smoothScroll:t.documentElement&&"scrollBehavior"in t.documentElement.style,touch:!!("ontouchstart"in e||e.DocumentTouch&&t instanceof e.DocumentTouch),passiveListener:function(){let t=!1;try{const s=Object.defineProperty({},"passive",{get(){t=!0}});e.addEventListener("testPassiveListener",null,s)}catch(e){}return t}(),gestures:"ongesturestart"in e}}()),b}function C(e){return void 0===e&&(e={}),x||(x=function(e){let{userAgent:t}=void 0===e?{}:e;const s=E(),a=r(),i=a.navigator.platform,n=t||a.navigator.userAgent,l={ios:!1,android:!1},o=a.screen.width,d=a.screen.height,c=n.match(/(Android);?[\s\/]+([\d.]+)?/);let p=n.match(/(iPad).*OS\s([\d_]+)/);const u=n.match(/(iPod)(.*OS\s([\d_]+))?/),h=!p&&n.match(/(iPhone\sOS|iOS)\s([\d_]+)/),m="Win32"===i;let f="MacIntel"===i;return!p&&f&&s.touch&&["1024x1366","1366x1024","834x1194","1194x834","834x1112","1112x834","768x1024","1024x768","820x1180","1180x820","810x1080","1080x810"].indexOf(`${o}x${d}`)>=0&&(p=n.match(/(Version)\/([\d.]+)/),p||(p=[0,1,"13_0_0"]),f=!1),c&&!m&&(l.os="android",l.android=!0),(p||h||u)&&(l.os="ios",l.ios=!0),l}(e)),x}function T(){return y||(y=function(){const e=r();return{isSafari:function(){const t=e.navigator.userAgent.toLowerCase();return t.indexOf("safari")>=0&&t.indexOf("chrome")<0&&t.indexOf("android")<0}(),isWebView:/(iPhone|iPod|iPad).*AppleWebKit(?!.*Safari)/i.test(e.navigator.userAgent)}}()),y}Object.keys(c).forEach((e=>{Object.defineProperty(d.fn,e,{value:c[e],writable:!0})}));var $={on(e,t,s){const a=this;if(!a.eventsListeners||a.destroyed)return a;if("function"!=typeof t)return a;const i=s?"unshift":"push";return e.split(" ").forEach((e=>{a.eventsListeners[e]||(a.eventsListeners[e]=[]),a.eventsListeners[e][i](t)})),a},once(e,t,s){const a=this;if(!a.eventsListeners||a.destroyed)return a;if("function"!=typeof t)return a;function i(){a.off(e,i),i.__emitterProxy&&delete i.__emitterProxy;for(var s=arguments.length,r=new Array(s),n=0;n<s;n++)r[n]=arguments[n];t.apply(a,r)}return i.__emitterProxy=t,a.on(e,i,s)},onAny(e,t){const s=this;if(!s.eventsListeners||s.destroyed)return s;if("function"!=typeof e)return s;const a=t?"unshift":"push";return s.eventsAnyListeners.indexOf(e)<0&&s.eventsAnyListeners[a](e),s},offAny(e){const t=this;if(!t.eventsListeners||t.destroyed)return t;if(!t.eventsAnyListeners)return t;const s=t.eventsAnyListeners.indexOf(e);return s>=0&&t.eventsAnyListeners.splice(s,1),t},off(e,t){const s=this;return!s.eventsListeners||s.destroyed?s:s.eventsListeners?(e.split(" ").forEach((e=>{void 0===t?s.eventsListeners[e]=[]:s.eventsListeners[e]&&s.eventsListeners[e].forEach(((a,i)=>{(a===t||a.__emitterProxy&&a.__emitterProxy===t)&&s.eventsListeners[e].splice(i,1)}))})),s):s},emit(){const e=this;if(!e.eventsListeners||e.destroyed)return e;if(!e.eventsListeners)return e;let t,s,a;for(var i=arguments.length,r=new Array(i),n=0;n<i;n++)r[n]=arguments[n];"string"==typeof r[0]||Array.isArray(r[0])?(t=r[0],s=r.slice(1,r.length),a=e):(t=r[0].events,s=r[0].data,a=r[0].context||e),s.unshift(a);return(Array.isArray(t)?t:t.split(" ")).forEach((t=>{e.eventsAnyListeners&&e.eventsAnyListeners.length&&e.eventsAnyListeners.forEach((e=>{e.apply(a,[t,...s])})),e.eventsListeners&&e.eventsListeners[t]&&e.eventsListeners[t].forEach((e=>{e.apply(a,s)}))})),e}};var S={updateSize:function(){const e=this;let t,s;const a=e.$el;t=void 0!==e.params.width&&null!==e.params.width?e.params.width:a[0].clientWidth,s=void 0!==e.params.height&&null!==e.params.height?e.params.height:a[0].clientHeight,0===t&&e.isHorizontal()||0===s&&e.isVertical()||(t=t-parseInt(a.css("padding-left")||0,10)-parseInt(a.css("padding-right")||0,10),s=s-parseInt(a.css("padding-top")||0,10)-parseInt(a.css("padding-bottom")||0,10),Number.isNaN(t)&&(t=0),Number.isNaN(s)&&(s=0),Object.assign(e,{width:t,height:s,size:e.isHorizontal()?t:s}))},updateSlides:function(){const e=this;function t(t){return e.isHorizontal()?t:{width:"height","margin-top":"margin-left","margin-bottom ":"margin-right","margin-left":"margin-top","margin-right":"margin-bottom","padding-left":"padding-top","padding-right":"padding-bottom",marginRight:"marginBottom"}[t]}function s(e,s){return parseFloat(e.getPropertyValue(t(s))||0)}const a=e.params,{$wrapperEl:i,size:r,rtlTranslate:n,wrongRTL:l}=e,o=e.virtual&&a.virtual.enabled,d=o?e.virtual.slides.length:e.slides.length,c=i.children(`.${e.params.slideClass}`),p=o?e.virtual.slides.length:c.length;let u=[];const h=[],m=[];let f=a.slidesOffsetBefore;"function"==typeof f&&(f=a.slidesOffsetBefore.call(e));let g=a.slidesOffsetAfter;"function"==typeof g&&(g=a.slidesOffsetAfter.call(e));const w=e.snapGrid.length,b=e.slidesGrid.length;let x=a.spaceBetween,y=-f,E=0,C=0;if(void 0===r)return;"string"==typeof x&&x.indexOf("%")>=0&&(x=parseFloat(x.replace("%",""))/100*r),e.virtualSize=-x,n?c.css({marginLeft:"",marginBottom:"",marginTop:""}):c.css({marginRight:"",marginBottom:"",marginTop:""}),a.centeredSlides&&a.cssMode&&(v(e.wrapperEl,"--swiper-centered-offset-before",""),v(e.wrapperEl,"--swiper-centered-offset-after",""));const T=a.grid&&a.grid.rows>1&&e.grid;let $;T&&e.grid.initSlides(p);const S="auto"===a.slidesPerView&&a.breakpoints&&Object.keys(a.breakpoints).filter((e=>void 0!==a.breakpoints[e].slidesPerView)).length>0;for(let i=0;i<p;i+=1){$=0;const n=c.eq(i);if(T&&e.grid.updateSlide(i,n,p,t),"none"!==n.css("display")){if("auto"===a.slidesPerView){S&&(c[i].style[t("width")]="");const r=getComputedStyle(n[0]),l=n[0].style.transform,o=n[0].style.webkitTransform;if(l&&(n[0].style.transform="none"),o&&(n[0].style.webkitTransform="none"),a.roundLengths)$=e.isHorizontal()?n.outerWidth(!0):n.outerHeight(!0);else{const e=s(r,"width"),t=s(r,"padding-left"),a=s(r,"padding-right"),i=s(r,"margin-left"),l=s(r,"margin-right"),o=r.getPropertyValue("box-sizing");if(o&&"border-box"===o)$=e+i+l;else{const{clientWidth:s,offsetWidth:r}=n[0];$=e+t+a+i+l+(r-s)}}l&&(n[0].style.transform=l),o&&(n[0].style.webkitTransform=o),a.roundLengths&&($=Math.floor($))}else $=(r-(a.slidesPerView-1)*x)/a.slidesPerView,a.roundLengths&&($=Math.floor($)),c[i]&&(c[i].style[t("width")]=`${$}px`);c[i]&&(c[i].swiperSlideSize=$),m.push($),a.centeredSlides?(y=y+$/2+E/2+x,0===E&&0!==i&&(y=y-r/2-x),0===i&&(y=y-r/2-x),Math.abs(y)<.001&&(y=0),a.roundLengths&&(y=Math.floor(y)),C%a.slidesPerGroup==0&&u.push(y),h.push(y)):(a.roundLengths&&(y=Math.floor(y)),(C-Math.min(e.params.slidesPerGroupSkip,C))%e.params.slidesPerGroup==0&&u.push(y),h.push(y),y=y+$+x),e.virtualSize+=$+x,E=$,C+=1}}if(e.virtualSize=Math.max(e.virtualSize,r)+g,n&&l&&("slide"===a.effect||"coverflow"===a.effect)&&i.css({width:`${e.virtualSize+a.spaceBetween}px`}),a.setWrapperSize&&i.css({[t("width")]:`${e.virtualSize+a.spaceBetween}px`}),T&&e.grid.updateWrapperSize($,u,t),!a.centeredSlides){const t=[];for(let s=0;s<u.length;s+=1){let i=u[s];a.roundLengths&&(i=Math.floor(i)),u[s]<=e.virtualSize-r&&t.push(i)}u=t,Math.floor(e.virtualSize-r)-Math.floor(u[u.length-1])>1&&u.push(e.virtualSize-r)}if(0===u.length&&(u=[0]),0!==a.spaceBetween){const s=e.isHorizontal()&&n?"marginLeft":t("marginRight");c.filter(((e,t)=>!a.cssMode||t!==c.length-1)).css({[s]:`${x}px`})}if(a.centeredSlides&&a.centeredSlidesBounds){let e=0;m.forEach((t=>{e+=t+(a.spaceBetween?a.spaceBetween:0)})),e-=a.spaceBetween;const t=e-r;u=u.map((e=>e<0?-f:e>t?t+g:e))}if(a.centerInsufficientSlides){let e=0;if(m.forEach((t=>{e+=t+(a.spaceBetween?a.spaceBetween:0)})),e-=a.spaceBetween,e<r){const t=(r-e)/2;u.forEach(((e,s)=>{u[s]=e-t})),h.forEach(((e,s)=>{h[s]=e+t}))}}if(Object.assign(e,{slides:c,snapGrid:u,slidesGrid:h,slidesSizesGrid:m}),a.centeredSlides&&a.cssMode&&!a.centeredSlidesBounds){v(e.wrapperEl,"--swiper-centered-offset-before",-u[0]+"px"),v(e.wrapperEl,"--swiper-centered-offset-after",e.size/2-m[m.length-1]/2+"px");const t=-e.snapGrid[0],s=-e.slidesGrid[0];e.snapGrid=e.snapGrid.map((e=>e+t)),e.slidesGrid=e.slidesGrid.map((e=>e+s))}if(p!==d&&e.emit("slidesLengthChange"),u.length!==w&&(e.params.watchOverflow&&e.checkOverflow(),e.emit("snapGridLengthChange")),h.length!==b&&e.emit("slidesGridLengthChange"),a.watchSlidesProgress&&e.updateSlidesOffset(),!(o||a.cssMode||"slide"!==a.effect&&"fade"!==a.effect)){const t=`${a.containerModifierClass}backface-hidden`,s=e.$el.hasClass(t);p<=a.maxBackfaceHiddenSlides?s||e.$el.addClass(t):s&&e.$el.removeClass(t)}},updateAutoHeight:function(e){const t=this,s=[],a=t.virtual&&t.params.virtual.enabled;let i,r=0;"number"==typeof e?t.setTransition(e):!0===e&&t.setTransition(t.params.speed);const n=e=>a?t.slides.filter((t=>parseInt(t.getAttribute("data-swiper-slide-index"),10)===e))[0]:t.slides.eq(e)[0];if("auto"!==t.params.slidesPerView&&t.params.slidesPerView>1)if(t.params.centeredSlides)(t.visibleSlides||d([])).each((e=>{s.push(e)}));else for(i=0;i<Math.ceil(t.params.slidesPerView);i+=1){const e=t.activeIndex+i;if(e>t.slides.length&&!a)break;s.push(n(e))}else s.push(n(t.activeIndex));for(i=0;i<s.length;i+=1)if(void 0!==s[i]){const e=s[i].offsetHeight;r=e>r?e:r}(r||0===r)&&t.$wrapperEl.css("height",`${r}px`)},updateSlidesOffset:function(){const e=this,t=e.slides;for(let s=0;s<t.length;s+=1)t[s].swiperSlideOffset=e.isHorizontal()?t[s].offsetLeft:t[s].offsetTop},updateSlidesProgress:function(e){void 0===e&&(e=this&&this.translate||0);const t=this,s=t.params,{slides:a,rtlTranslate:i,snapGrid:r}=t;if(0===a.length)return;void 0===a[0].swiperSlideOffset&&t.updateSlidesOffset();let n=-e;i&&(n=e),a.removeClass(s.slideVisibleClass),t.visibleSlidesIndexes=[],t.visibleSlides=[];for(let e=0;e<a.length;e+=1){const l=a[e];let o=l.swiperSlideOffset;s.cssMode&&s.centeredSlides&&(o-=a[0].swiperSlideOffset);const d=(n+(s.centeredSlides?t.minTranslate():0)-o)/(l.swiperSlideSize+s.spaceBetween),c=(n-r[0]+(s.centeredSlides?t.minTranslate():0)-o)/(l.swiperSlideSize+s.spaceBetween),p=-(n-o),u=p+t.slidesSizesGrid[e];(p>=0&&p<t.size-1||u>1&&u<=t.size||p<=0&&u>=t.size)&&(t.visibleSlides.push(l),t.visibleSlidesIndexes.push(e),a.eq(e).addClass(s.slideVisibleClass)),l.progress=i?-d:d,l.originalProgress=i?-c:c}t.visibleSlides=d(t.visibleSlides)},updateProgress:function(e){const t=this;if(void 0===e){const s=t.rtlTranslate?-1:1;e=t&&t.translate&&t.translate*s||0}const s=t.params,a=t.maxTranslate()-t.minTranslate();let{progress:i,isBeginning:r,isEnd:n}=t;const l=r,o=n;0===a?(i=0,r=!0,n=!0):(i=(e-t.minTranslate())/a,r=i<=0,n=i>=1),Object.assign(t,{progress:i,isBeginning:r,isEnd:n}),(s.watchSlidesProgress||s.centeredSlides&&s.autoHeight)&&t.updateSlidesProgress(e),r&&!l&&t.emit("reachBeginning toEdge"),n&&!o&&t.emit("reachEnd toEdge"),(l&&!r||o&&!n)&&t.emit("fromEdge"),t.emit("progress",i)},updateSlidesClasses:function(){const e=this,{slides:t,params:s,$wrapperEl:a,activeIndex:i,realIndex:r}=e,n=e.virtual&&s.virtual.enabled;let l;t.removeClass(`${s.slideActiveClass} ${s.slideNextClass} ${s.slidePrevClass} ${s.slideDuplicateActiveClass} ${s.slideDuplicateNextClass} ${s.slideDuplicatePrevClass}`),l=n?e.$wrapperEl.find(`.${s.slideClass}[data-swiper-slide-index="${i}"]`):t.eq(i),l.addClass(s.slideActiveClass),s.loop&&(l.hasClass(s.slideDuplicateClass)?a.children(`.${s.slideClass}:not(.${s.slideDuplicateClass})[data-swiper-slide-index="${r}"]`).addClass(s.slideDuplicateActiveClass):a.children(`.${s.slideClass}.${s.slideDuplicateClass}[data-swiper-slide-index="${r}"]`).addClass(s.slideDuplicateActiveClass));let o=l.nextAll(`.${s.slideClass}`).eq(0).addClass(s.slideNextClass);s.loop&&0===o.length&&(o=t.eq(0),o.addClass(s.slideNextClass));let d=l.prevAll(`.${s.slideClass}`).eq(0).addClass(s.slidePrevClass);s.loop&&0===d.length&&(d=t.eq(-1),d.addClass(s.slidePrevClass)),s.loop&&(o.hasClass(s.slideDuplicateClass)?a.children(`.${s.slideClass}:not(.${s.slideDuplicateClass})[data-swiper-slide-index="${o.attr("data-swiper-slide-index")}"]`).addClass(s.slideDuplicateNextClass):a.children(`.${s.slideClass}.${s.slideDuplicateClass}[data-swiper-slide-index="${o.attr("data-swiper-slide-index")}"]`).addClass(s.slideDuplicateNextClass),d.hasClass(s.slideDuplicateClass)?a.children(`.${s.slideClass}:not(.${s.slideDuplicateClass})[data-swiper-slide-index="${d.attr("data-swiper-slide-index")}"]`).addClass(s.slideDuplicatePrevClass):a.children(`.${s.slideClass}.${s.slideDuplicateClass}[data-swiper-slide-index="${d.attr("data-swiper-slide-index")}"]`).addClass(s.slideDuplicatePrevClass)),e.emitSlidesClasses()},updateActiveIndex:function(e){const t=this,s=t.rtlTranslate?t.translate:-t.translate,{slidesGrid:a,snapGrid:i,params:r,activeIndex:n,realIndex:l,snapIndex:o}=t;let d,c=e;if(void 0===c){for(let e=0;e<a.length;e+=1)void 0!==a[e+1]?s>=a[e]&&s<a[e+1]-(a[e+1]-a[e])/2?c=e:s>=a[e]&&s<a[e+1]&&(c=e+1):s>=a[e]&&(c=e);r.normalizeSlideIndex&&(c<0||void 0===c)&&(c=0)}if(i.indexOf(s)>=0)d=i.indexOf(s);else{const e=Math.min(r.slidesPerGroupSkip,c);d=e+Math.floor((c-e)/r.slidesPerGroup)}if(d>=i.length&&(d=i.length-1),c===n)return void(d!==o&&(t.snapIndex=d,t.emit("snapIndexChange")));const p=parseInt(t.slides.eq(c).attr("data-swiper-slide-index")||c,10);Object.assign(t,{snapIndex:d,realIndex:p,previousIndex:n,activeIndex:c}),t.emit("activeIndexChange"),t.emit("snapIndexChange"),l!==p&&t.emit("realIndexChange"),(t.initialized||t.params.runCallbacksOnInit)&&t.emit("slideChange")},updateClickedSlide:function(e){const t=this,s=t.params,a=d(e).closest(`.${s.slideClass}`)[0];let i,r=!1;if(a)for(let e=0;e<t.slides.length;e+=1)if(t.slides[e]===a){r=!0,i=e;break}if(!a||!r)return t.clickedSlide=void 0,void(t.clickedIndex=void 0);t.clickedSlide=a,t.virtual&&t.params.virtual.enabled?t.clickedIndex=parseInt(d(a).attr("data-swiper-slide-index"),10):t.clickedIndex=i,s.slideToClickedSlide&&void 0!==t.clickedIndex&&t.clickedIndex!==t.activeIndex&&t.slideToClickedSlide()}};var M={getTranslate:function(e){void 0===e&&(e=this.isHorizontal()?"x":"y");const{params:t,rtlTranslate:s,translate:a,$wrapperEl:i}=this;if(t.virtualTranslate)return s?-a:a;if(t.cssMode)return a;let r=h(i[0],e);return s&&(r=-r),r||0},setTranslate:function(e,t){const s=this,{rtlTranslate:a,params:i,$wrapperEl:r,wrapperEl:n,progress:l}=s;let o,d=0,c=0;s.isHorizontal()?d=a?-e:e:c=e,i.roundLengths&&(d=Math.floor(d),c=Math.floor(c)),i.cssMode?n[s.isHorizontal()?"scrollLeft":"scrollTop"]=s.isHorizontal()?-d:-c:i.virtualTranslate||r.transform(`translate3d(${d}px, ${c}px, 0px)`),s.previousTranslate=s.translate,s.translate=s.isHorizontal()?d:c;const p=s.maxTranslate()-s.minTranslate();o=0===p?0:(e-s.minTranslate())/p,o!==l&&s.updateProgress(e),s.emit("setTranslate",s.translate,t)},minTranslate:function(){return-this.snapGrid[0]},maxTranslate:function(){return-this.snapGrid[this.snapGrid.length-1]},translateTo:function(e,t,s,a,i){void 0===e&&(e=0),void 0===t&&(t=this.params.speed),void 0===s&&(s=!0),void 0===a&&(a=!0);const r=this,{params:n,wrapperEl:l}=r;if(r.animating&&n.preventInteractionOnTransition)return!1;const o=r.minTranslate(),d=r.maxTranslate();let c;if(c=a&&e>o?o:a&&e<d?d:e,r.updateProgress(c),n.cssMode){const e=r.isHorizontal();if(0===t)l[e?"scrollLeft":"scrollTop"]=-c;else{if(!r.support.smoothScroll)return w({swiper:r,targetPosition:-c,side:e?"left":"top"}),!0;l.scrollTo({[e?"left":"top"]:-c,behavior:"smooth"})}return!0}return 0===t?(r.setTransition(0),r.setTranslate(c),s&&(r.emit("beforeTransitionStart",t,i),r.emit("transitionEnd"))):(r.setTransition(t),r.setTranslate(c),s&&(r.emit("beforeTransitionStart",t,i),r.emit("transitionStart")),r.animating||(r.animating=!0,r.onTranslateToWrapperTransitionEnd||(r.onTranslateToWrapperTransitionEnd=function(e){r&&!r.destroyed&&e.target===this&&(r.$wrapperEl[0].removeEventListener("transitionend",r.onTranslateToWrapperTransitionEnd),r.$wrapperEl[0].removeEventListener("webkitTransitionEnd",r.onTranslateToWrapperTransitionEnd),r.onTranslateToWrapperTransitionEnd=null,delete r.onTranslateToWrapperTransitionEnd,s&&r.emit("transitionEnd"))}),r.$wrapperEl[0].addEventListener("transitionend",r.onTranslateToWrapperTransitionEnd),r.$wrapperEl[0].addEventListener("webkitTransitionEnd",r.onTranslateToWrapperTransitionEnd))),!0}};function P(e){let{swiper:t,runCallbacks:s,direction:a,step:i}=e;const{activeIndex:r,previousIndex:n}=t;let l=a;if(l||(l=r>n?"next":r<n?"prev":"reset"),t.emit(`transition${i}`),s&&r!==n){if("reset"===l)return void t.emit(`slideResetTransition${i}`);t.emit(`slideChangeTransition${i}`),"next"===l?t.emit(`slideNextTransition${i}`):t.emit(`slidePrevTransition${i}`)}}var k={slideTo:function(e,t,s,a,i){if(void 0===e&&(e=0),void 0===t&&(t=this.params.speed),void 0===s&&(s=!0),"number"!=typeof e&&"string"!=typeof e)throw new Error(`The 'index' argument cannot have type other than 'number' or 'string'. [${typeof e}] given.`);if("string"==typeof e){const t=parseInt(e,10);if(!isFinite(t))throw new Error(`The passed-in 'index' (string) couldn't be converted to 'number'. [${e}] given.`);e=t}const r=this;let n=e;n<0&&(n=0);const{params:l,snapGrid:o,slidesGrid:d,previousIndex:c,activeIndex:p,rtlTranslate:u,wrapperEl:h,enabled:m}=r;if(r.animating&&l.preventInteractionOnTransition||!m&&!a&&!i)return!1;const f=Math.min(r.params.slidesPerGroupSkip,n);let g=f+Math.floor((n-f)/r.params.slidesPerGroup);g>=o.length&&(g=o.length-1),(p||l.initialSlide||0)===(c||0)&&s&&r.emit("beforeSlideChangeStart");const v=-o[g];if(r.updateProgress(v),l.normalizeSlideIndex)for(let e=0;e<d.length;e+=1){const t=-Math.floor(100*v),s=Math.floor(100*d[e]),a=Math.floor(100*d[e+1]);void 0!==d[e+1]?t>=s&&t<a-(a-s)/2?n=e:t>=s&&t<a&&(n=e+1):t>=s&&(n=e)}if(r.initialized&&n!==p){if(!r.allowSlideNext&&v<r.translate&&v<r.minTranslate())return!1;if(!r.allowSlidePrev&&v>r.translate&&v>r.maxTranslate()&&(p||0)!==n)return!1}let b;if(b=n>p?"next":n<p?"prev":"reset",u&&-v===r.translate||!u&&v===r.translate)return r.updateActiveIndex(n),l.autoHeight&&r.updateAutoHeight(),r.updateSlidesClasses(),"slide"!==l.effect&&r.setTranslate(v),"reset"!==b&&(r.transitionStart(s,b),r.transitionEnd(s,b)),!1;if(l.cssMode){const e=r.isHorizontal(),s=u?v:-v;if(0===t){const t=r.virtual&&r.params.virtual.enabled;t&&(r.wrapperEl.style.scrollSnapType="none",r._immediateVirtual=!0),h[e?"scrollLeft":"scrollTop"]=s,t&&requestAnimationFrame((()=>{r.wrapperEl.style.scrollSnapType="",r._swiperImmediateVirtual=!1}))}else{if(!r.support.smoothScroll)return w({swiper:r,targetPosition:s,side:e?"left":"top"}),!0;h.scrollTo({[e?"left":"top"]:s,behavior:"smooth"})}return!0}return r.setTransition(t),r.setTranslate(v),r.updateActiveIndex(n),r.updateSlidesClasses(),r.emit("beforeTransitionStart",t,a),r.transitionStart(s,b),0===t?r.transitionEnd(s,b):r.animating||(r.animating=!0,r.onSlideToWrapperTransitionEnd||(r.onSlideToWrapperTransitionEnd=function(e){r&&!r.destroyed&&e.target===this&&(r.$wrapperEl[0].removeEventListener("transitionend",r.onSlideToWrapperTransitionEnd),r.$wrapperEl[0].removeEventListener("webkitTransitionEnd",r.onSlideToWrapperTransitionEnd),r.onSlideToWrapperTransitionEnd=null,delete r.onSlideToWrapperTransitionEnd,r.transitionEnd(s,b))}),r.$wrapperEl[0].addEventListener("transitionend",r.onSlideToWrapperTransitionEnd),r.$wrapperEl[0].addEventListener("webkitTransitionEnd",r.onSlideToWrapperTransitionEnd)),!0},slideToLoop:function(e,t,s,a){if(void 0===e&&(e=0),void 0===t&&(t=this.params.speed),void 0===s&&(s=!0),"string"==typeof e){const t=parseInt(e,10);if(!isFinite(t))throw new Error(`The passed-in 'index' (string) couldn't be converted to 'number'. [${e}] given.`);e=t}const i=this;let r=e;return i.params.loop&&(r+=i.loopedSlides),i.slideTo(r,t,s,a)},slideNext:function(e,t,s){void 0===e&&(e=this.params.speed),void 0===t&&(t=!0);const a=this,{animating:i,enabled:r,params:n}=a;if(!r)return a;let l=n.slidesPerGroup;"auto"===n.slidesPerView&&1===n.slidesPerGroup&&n.slidesPerGroupAuto&&(l=Math.max(a.slidesPerViewDynamic("current",!0),1));const o=a.activeIndex<n.slidesPerGroupSkip?1:l;if(n.loop){if(i&&n.loopPreventsSlide)return!1;a.loopFix(),a._clientLeft=a.$wrapperEl[0].clientLeft}return n.rewind&&a.isEnd?a.slideTo(0,e,t,s):a.slideTo(a.activeIndex+o,e,t,s)},slidePrev:function(e,t,s){void 0===e&&(e=this.params.speed),void 0===t&&(t=!0);const a=this,{params:i,animating:r,snapGrid:n,slidesGrid:l,rtlTranslate:o,enabled:d}=a;if(!d)return a;if(i.loop){if(r&&i.loopPreventsSlide)return!1;a.loopFix(),a._clientLeft=a.$wrapperEl[0].clientLeft}function c(e){return e<0?-Math.floor(Math.abs(e)):Math.floor(e)}const p=c(o?a.translate:-a.translate),u=n.map((e=>c(e)));let h=n[u.indexOf(p)-1];if(void 0===h&&i.cssMode){let e;n.forEach(((t,s)=>{p>=t&&(e=s)})),void 0!==e&&(h=n[e>0?e-1:e])}let m=0;if(void 0!==h&&(m=l.indexOf(h),m<0&&(m=a.activeIndex-1),"auto"===i.slidesPerView&&1===i.slidesPerGroup&&i.slidesPerGroupAuto&&(m=m-a.slidesPerViewDynamic("previous",!0)+1,m=Math.max(m,0))),i.rewind&&a.isBeginning){const i=a.params.virtual&&a.params.virtual.enabled&&a.virtual?a.virtual.slides.length-1:a.slides.length-1;return a.slideTo(i,e,t,s)}return a.slideTo(m,e,t,s)},slideReset:function(e,t,s){return void 0===e&&(e=this.params.speed),void 0===t&&(t=!0),this.slideTo(this.activeIndex,e,t,s)},slideToClosest:function(e,t,s,a){void 0===e&&(e=this.params.speed),void 0===t&&(t=!0),void 0===a&&(a=.5);const i=this;let r=i.activeIndex;const n=Math.min(i.params.slidesPerGroupSkip,r),l=n+Math.floor((r-n)/i.params.slidesPerGroup),o=i.rtlTranslate?i.translate:-i.translate;if(o>=i.snapGrid[l]){const e=i.snapGrid[l];o-e>(i.snapGrid[l+1]-e)*a&&(r+=i.params.slidesPerGroup)}else{const e=i.snapGrid[l-1];o-e<=(i.snapGrid[l]-e)*a&&(r-=i.params.slidesPerGroup)}return r=Math.max(r,0),r=Math.min(r,i.slidesGrid.length-1),i.slideTo(r,e,t,s)},slideToClickedSlide:function(){const e=this,{params:t,$wrapperEl:s}=e,a="auto"===t.slidesPerView?e.slidesPerViewDynamic():t.slidesPerView;let i,r=e.clickedIndex;if(t.loop){if(e.animating)return;i=parseInt(d(e.clickedSlide).attr("data-swiper-slide-index"),10),t.centeredSlides?r<e.loopedSlides-a/2||r>e.slides.length-e.loopedSlides+a/2?(e.loopFix(),r=s.children(`.${t.slideClass}[data-swiper-slide-index="${i}"]:not(.${t.slideDuplicateClass})`).eq(0).index(),p((()=>{e.slideTo(r)}))):e.slideTo(r):r>e.slides.length-a?(e.loopFix(),r=s.children(`.${t.slideClass}[data-swiper-slide-index="${i}"]:not(.${t.slideDuplicateClass})`).eq(0).index(),p((()=>{e.slideTo(r)}))):e.slideTo(r)}else e.slideTo(r)}};var z={loopCreate:function(){const e=this,t=a(),{params:s,$wrapperEl:i}=e,r=i.children().length>0?d(i.children()[0].parentNode):i;r.children(`.${s.slideClass}.${s.slideDuplicateClass}`).remove();let n=r.children(`.${s.slideClass}`);if(s.loopFillGroupWithBlank){const e=s.slidesPerGroup-n.length%s.slidesPerGroup;if(e!==s.slidesPerGroup){for(let a=0;a<e;a+=1){const e=d(t.createElement("div")).addClass(`${s.slideClass} ${s.slideBlankClass}`);r.append(e)}n=r.children(`.${s.slideClass}`)}}"auto"!==s.slidesPerView||s.loopedSlides||(s.loopedSlides=n.length),e.loopedSlides=Math.ceil(parseFloat(s.loopedSlides||s.slidesPerView,10)),e.loopedSlides+=s.loopAdditionalSlides,e.loopedSlides>n.length&&(e.loopedSlides=n.length);const l=[],o=[];n.each(((t,s)=>{const a=d(t);s<e.loopedSlides&&o.push(t),s<n.length&&s>=n.length-e.loopedSlides&&l.push(t),a.attr("data-swiper-slide-index",s)}));for(let e=0;e<o.length;e+=1)r.append(d(o[e].cloneNode(!0)).addClass(s.slideDuplicateClass));for(let e=l.length-1;e>=0;e-=1)r.prepend(d(l[e].cloneNode(!0)).addClass(s.slideDuplicateClass))},loopFix:function(){const e=this;e.emit("beforeLoopFix");const{activeIndex:t,slides:s,loopedSlides:a,allowSlidePrev:i,allowSlideNext:r,snapGrid:n,rtlTranslate:l}=e;let o;e.allowSlidePrev=!0,e.allowSlideNext=!0;const d=-n[t]-e.getTranslate();if(t<a){o=s.length-3*a+t,o+=a;e.slideTo(o,0,!1,!0)&&0!==d&&e.setTranslate((l?-e.translate:e.translate)-d)}else if(t>=s.length-a){o=-s.length+t+a,o+=a;e.slideTo(o,0,!1,!0)&&0!==d&&e.setTranslate((l?-e.translate:e.translate)-d)}e.allowSlidePrev=i,e.allowSlideNext=r,e.emit("loopFix")},loopDestroy:function(){const{$wrapperEl:e,params:t,slides:s}=this;e.children(`.${t.slideClass}.${t.slideDuplicateClass},.${t.slideClass}.${t.slideBlankClass}`).remove(),s.removeAttr("data-swiper-slide-index")}};function L(e){const t=this,s=a(),i=r(),n=t.touchEventsData,{params:l,touches:o,enabled:c}=t;if(!c)return;if(t.animating&&l.preventInteractionOnTransition)return;!t.animating&&l.cssMode&&l.loop&&t.loopFix();let p=e;p.originalEvent&&(p=p.originalEvent);let h=d(p.target);if("wrapper"===l.touchEventsTarget&&!h.closest(t.wrapperEl).length)return;if(n.isTouchEvent="touchstart"===p.type,!n.isTouchEvent&&"which"in p&&3===p.which)return;if(!n.isTouchEvent&&"button"in p&&p.button>0)return;if(n.isTouched&&n.isMoved)return;!!l.noSwipingClass&&""!==l.noSwipingClass&&p.target&&p.target.shadowRoot&&e.path&&e.path[0]&&(h=d(e.path[0]));const m=l.noSwipingSelector?l.noSwipingSelector:`.${l.noSwipingClass}`,f=!(!p.target||!p.target.shadowRoot);if(l.noSwiping&&(f?function(e,t){return void 0===t&&(t=this),function t(s){if(!s||s===a()||s===r())return null;s.assignedSlot&&(s=s.assignedSlot);const i=s.closest(e);return i||s.getRootNode?i||t(s.getRootNode().host):null}(t)}(m,h[0]):h.closest(m)[0]))return void(t.allowClick=!0);if(l.swipeHandler&&!h.closest(l.swipeHandler)[0])return;o.currentX="touchstart"===p.type?p.targetTouches[0].pageX:p.pageX,o.currentY="touchstart"===p.type?p.targetTouches[0].pageY:p.pageY;const g=o.currentX,v=o.currentY,w=l.edgeSwipeDetection||l.iOSEdgeSwipeDetection,b=l.edgeSwipeThreshold||l.iOSEdgeSwipeThreshold;if(w&&(g<=b||g>=i.innerWidth-b)){if("prevent"!==w)return;e.preventDefault()}if(Object.assign(n,{isTouched:!0,isMoved:!1,allowTouchCallbacks:!0,isScrolling:void 0,startMoving:void 0}),o.startX=g,o.startY=v,n.touchStartTime=u(),t.allowClick=!0,t.updateSize(),t.swipeDirection=void 0,l.threshold>0&&(n.allowThresholdMove=!1),"touchstart"!==p.type){let e=!0;h.is(n.focusableElements)&&(e=!1,"SELECT"===h[0].nodeName&&(n.isTouched=!1)),s.activeElement&&d(s.activeElement).is(n.focusableElements)&&s.activeElement!==h[0]&&s.activeElement.blur();const a=e&&t.allowTouchMove&&l.touchStartPreventDefault;!l.touchStartForcePreventDefault&&!a||h[0].isContentEditable||p.preventDefault()}t.params.freeMode&&t.params.freeMode.enabled&&t.freeMode&&t.animating&&!l.cssMode&&t.freeMode.onTouchStart(),t.emit("touchStart",p)}function O(e){const t=a(),s=this,i=s.touchEventsData,{params:r,touches:n,rtlTranslate:l,enabled:o}=s;if(!o)return;let c=e;if(c.originalEvent&&(c=c.originalEvent),!i.isTouched)return void(i.startMoving&&i.isScrolling&&s.emit("touchMoveOpposite",c));if(i.isTouchEvent&&"touchmove"!==c.type)return;const p="touchmove"===c.type&&c.targetTouches&&(c.targetTouches[0]||c.changedTouches[0]),h="touchmove"===c.type?p.pageX:c.pageX,m="touchmove"===c.type?p.pageY:c.pageY;if(c.preventedByNestedSwiper)return n.startX=h,void(n.startY=m);if(!s.allowTouchMove)return d(c.target).is(i.focusableElements)||(s.allowClick=!1),void(i.isTouched&&(Object.assign(n,{startX:h,startY:m,currentX:h,currentY:m}),i.touchStartTime=u()));if(i.isTouchEvent&&r.touchReleaseOnEdges&&!r.loop)if(s.isVertical()){if(m<n.startY&&s.translate<=s.maxTranslate()||m>n.startY&&s.translate>=s.minTranslate())return i.isTouched=!1,void(i.isMoved=!1)}else if(h<n.startX&&s.translate<=s.maxTranslate()||h>n.startX&&s.translate>=s.minTranslate())return;if(i.isTouchEvent&&t.activeElement&&c.target===t.activeElement&&d(c.target).is(i.focusableElements))return i.isMoved=!0,void(s.allowClick=!1);if(i.allowTouchCallbacks&&s.emit("touchMove",c),c.targetTouches&&c.targetTouches.length>1)return;n.currentX=h,n.currentY=m;const f=n.currentX-n.startX,g=n.currentY-n.startY;if(s.params.threshold&&Math.sqrt(f**2+g**2)<s.params.threshold)return;if(void 0===i.isScrolling){let e;s.isHorizontal()&&n.currentY===n.startY||s.isVertical()&&n.currentX===n.startX?i.isScrolling=!1:f*f+g*g>=25&&(e=180*Math.atan2(Math.abs(g),Math.abs(f))/Math.PI,i.isScrolling=s.isHorizontal()?e>r.touchAngle:90-e>r.touchAngle)}if(i.isScrolling&&s.emit("touchMoveOpposite",c),void 0===i.startMoving&&(n.currentX===n.startX&&n.currentY===n.startY||(i.startMoving=!0)),i.isScrolling)return void(i.isTouched=!1);if(!i.startMoving)return;s.allowClick=!1,!r.cssMode&&c.cancelable&&c.preventDefault(),r.touchMoveStopPropagation&&!r.nested&&c.stopPropagation(),i.isMoved||(r.loop&&!r.cssMode&&s.loopFix(),i.startTranslate=s.getTranslate(),s.setTransition(0),s.animating&&s.$wrapperEl.trigger("webkitTransitionEnd transitionend"),i.allowMomentumBounce=!1,!r.grabCursor||!0!==s.allowSlideNext&&!0!==s.allowSlidePrev||s.setGrabCursor(!0),s.emit("sliderFirstMove",c)),s.emit("sliderMove",c),i.isMoved=!0;let v=s.isHorizontal()?f:g;n.diff=v,v*=r.touchRatio,l&&(v=-v),s.swipeDirection=v>0?"prev":"next",i.currentTranslate=v+i.startTranslate;let w=!0,b=r.resistanceRatio;if(r.touchReleaseOnEdges&&(b=0),v>0&&i.currentTranslate>s.minTranslate()?(w=!1,r.resistance&&(i.currentTranslate=s.minTranslate()-1+(-s.minTranslate()+i.startTranslate+v)**b)):v<0&&i.currentTranslate<s.maxTranslate()&&(w=!1,r.resistance&&(i.currentTranslate=s.maxTranslate()+1-(s.maxTranslate()-i.startTranslate-v)**b)),w&&(c.preventedByNestedSwiper=!0),!s.allowSlideNext&&"next"===s.swipeDirection&&i.currentTranslate<i.startTranslate&&(i.currentTranslate=i.startTranslate),!s.allowSlidePrev&&"prev"===s.swipeDirection&&i.currentTranslate>i.startTranslate&&(i.currentTranslate=i.startTranslate),s.allowSlidePrev||s.allowSlideNext||(i.currentTranslate=i.startTranslate),r.threshold>0){if(!(Math.abs(v)>r.threshold||i.allowThresholdMove))return void(i.currentTranslate=i.startTranslate);if(!i.allowThresholdMove)return i.allowThresholdMove=!0,n.startX=n.currentX,n.startY=n.currentY,i.currentTranslate=i.startTranslate,void(n.diff=s.isHorizontal()?n.currentX-n.startX:n.currentY-n.startY)}r.followFinger&&!r.cssMode&&((r.freeMode&&r.freeMode.enabled&&s.freeMode||r.watchSlidesProgress)&&(s.updateActiveIndex(),s.updateSlidesClasses()),s.params.freeMode&&r.freeMode.enabled&&s.freeMode&&s.freeMode.onTouchMove(),s.updateProgress(i.currentTranslate),s.setTranslate(i.currentTranslate))}function I(e){const t=this,s=t.touchEventsData,{params:a,touches:i,rtlTranslate:r,slidesGrid:n,enabled:l}=t;if(!l)return;let o=e;if(o.originalEvent&&(o=o.originalEvent),s.allowTouchCallbacks&&t.emit("touchEnd",o),s.allowTouchCallbacks=!1,!s.isTouched)return s.isMoved&&a.grabCursor&&t.setGrabCursor(!1),s.isMoved=!1,void(s.startMoving=!1);a.grabCursor&&s.isMoved&&s.isTouched&&(!0===t.allowSlideNext||!0===t.allowSlidePrev)&&t.setGrabCursor(!1);const d=u(),c=d-s.touchStartTime;if(t.allowClick){const e=o.path||o.composedPath&&o.composedPath();t.updateClickedSlide(e&&e[0]||o.target),t.emit("tap click",o),c<300&&d-s.lastClickTime<300&&t.emit("doubleTap doubleClick",o)}if(s.lastClickTime=u(),p((()=>{t.destroyed||(t.allowClick=!0)})),!s.isTouched||!s.isMoved||!t.swipeDirection||0===i.diff||s.currentTranslate===s.startTranslate)return s.isTouched=!1,s.isMoved=!1,void(s.startMoving=!1);let h;if(s.isTouched=!1,s.isMoved=!1,s.startMoving=!1,h=a.followFinger?r?t.translate:-t.translate:-s.currentTranslate,a.cssMode)return;if(t.params.freeMode&&a.freeMode.enabled)return void t.freeMode.onTouchEnd({currentPos:h});let m=0,f=t.slidesSizesGrid[0];for(let e=0;e<n.length;e+=e<a.slidesPerGroupSkip?1:a.slidesPerGroup){const t=e<a.slidesPerGroupSkip-1?1:a.slidesPerGroup;void 0!==n[e+t]?h>=n[e]&&h<n[e+t]&&(m=e,f=n[e+t]-n[e]):h>=n[e]&&(m=e,f=n[n.length-1]-n[n.length-2])}let g=null,v=null;a.rewind&&(t.isBeginning?v=t.params.virtual&&t.params.virtual.enabled&&t.virtual?t.virtual.slides.length-1:t.slides.length-1:t.isEnd&&(g=0));const w=(h-n[m])/f,b=m<a.slidesPerGroupSkip-1?1:a.slidesPerGroup;if(c>a.longSwipesMs){if(!a.longSwipes)return void t.slideTo(t.activeIndex);"next"===t.swipeDirection&&(w>=a.longSwipesRatio?t.slideTo(a.rewind&&t.isEnd?g:m+b):t.slideTo(m)),"prev"===t.swipeDirection&&(w>1-a.longSwipesRatio?t.slideTo(m+b):null!==v&&w<0&&Math.abs(w)>a.longSwipesRatio?t.slideTo(v):t.slideTo(m))}else{if(!a.shortSwipes)return void t.slideTo(t.activeIndex);t.navigation&&(o.target===t.navigation.nextEl||o.target===t.navigation.prevEl)?o.target===t.navigation.nextEl?t.slideTo(m+b):t.slideTo(m):("next"===t.swipeDirection&&t.slideTo(null!==g?g:m+b),"prev"===t.swipeDirection&&t.slideTo(null!==v?v:m))}}function A(){const e=this,{params:t,el:s}=e;if(s&&0===s.offsetWidth)return;t.breakpoints&&e.setBreakpoint();const{allowSlideNext:a,allowSlidePrev:i,snapGrid:r}=e;e.allowSlideNext=!0,e.allowSlidePrev=!0,e.updateSize(),e.updateSlides(),e.updateSlidesClasses(),("auto"===t.slidesPerView||t.slidesPerView>1)&&e.isEnd&&!e.isBeginning&&!e.params.centeredSlides?e.slideTo(e.slides.length-1,0,!1,!0):e.slideTo(e.activeIndex,0,!1,!0),e.autoplay&&e.autoplay.running&&e.autoplay.paused&&e.autoplay.run(),e.allowSlidePrev=i,e.allowSlideNext=a,e.params.watchOverflow&&r!==e.snapGrid&&e.checkOverflow()}function D(e){const t=this;t.enabled&&(t.allowClick||(t.params.preventClicks&&e.preventDefault(),t.params.preventClicksPropagation&&t.animating&&(e.stopPropagation(),e.stopImmediatePropagation())))}function G(){const e=this,{wrapperEl:t,rtlTranslate:s,enabled:a}=e;if(!a)return;let i;e.previousTranslate=e.translate,e.isHorizontal()?e.translate=-t.scrollLeft:e.translate=-t.scrollTop,0===e.translate&&(e.translate=0),e.updateActiveIndex(),e.updateSlidesClasses();const r=e.maxTranslate()-e.minTranslate();i=0===r?0:(e.translate-e.minTranslate())/r,i!==e.progress&&e.updateProgress(s?-e.translate:e.translate),e.emit("setTranslate",e.translate,!1)}let N=!1;function B(){}const H=(e,t)=>{const s=a(),{params:i,touchEvents:r,el:n,wrapperEl:l,device:o,support:d}=e,c=!!i.nested,p="on"===t?"addEventListener":"removeEventListener",u=t;if(d.touch){const t=!("touchstart"!==r.start||!d.passiveListener||!i.passiveListeners)&&{passive:!0,capture:!1};n[p](r.start,e.onTouchStart,t),n[p](r.move,e.onTouchMove,d.passiveListener?{passive:!1,capture:c}:c),n[p](r.end,e.onTouchEnd,t),r.cancel&&n[p](r.cancel,e.onTouchEnd,t)}else n[p](r.start,e.onTouchStart,!1),s[p](r.move,e.onTouchMove,c),s[p](r.end,e.onTouchEnd,!1);(i.preventClicks||i.preventClicksPropagation)&&n[p]("click",e.onClick,!0),i.cssMode&&l[p]("scroll",e.onScroll),i.updateOnWindowResize?e[u](o.ios||o.android?"resize orientationchange observerUpdate":"resize observerUpdate",A,!0):e[u]("observerUpdate",A,!0)};var X={attachEvents:function(){const e=this,t=a(),{params:s,support:i}=e;e.onTouchStart=L.bind(e),e.onTouchMove=O.bind(e),e.onTouchEnd=I.bind(e),s.cssMode&&(e.onScroll=G.bind(e)),e.onClick=D.bind(e),i.touch&&!N&&(t.addEventListener("touchstart",B),N=!0),H(e,"on")},detachEvents:function(){H(this,"off")}};const Y=(e,t)=>e.grid&&t.grid&&t.grid.rows>1;var R={addClasses:function(){const e=this,{classNames:t,params:s,rtl:a,$el:i,device:r,support:n}=e,l=function(e,t){const s=[];return e.forEach((e=>{"object"==typeof e?Object.keys(e).forEach((a=>{e[a]&&s.push(t+a)})):"string"==typeof e&&s.push(t+e)})),s}(["initialized",s.direction,{"pointer-events":!n.touch},{"free-mode":e.params.freeMode&&s.freeMode.enabled},{autoheight:s.autoHeight},{rtl:a},{grid:s.grid&&s.grid.rows>1},{"grid-column":s.grid&&s.grid.rows>1&&"column"===s.grid.fill},{android:r.android},{ios:r.ios},{"css-mode":s.cssMode},{centered:s.cssMode&&s.centeredSlides},{"watch-progress":s.watchSlidesProgress}],s.containerModifierClass);t.push(...l),i.addClass([...t].join(" ")),e.emitContainerClasses()},removeClasses:function(){const{$el:e,classNames:t}=this;e.removeClass(t.join(" ")),this.emitContainerClasses()}};var W={init:!0,direction:"horizontal",touchEventsTarget:"wrapper",initialSlide:0,speed:300,cssMode:!1,updateOnWindowResize:!0,resizeObserver:!0,nested:!1,createElements:!1,enabled:!0,focusableElements:"input, select, option, textarea, button, video, label",width:null,height:null,preventInteractionOnTransition:!1,userAgent:null,url:null,edgeSwipeDetection:!1,edgeSwipeThreshold:20,autoHeight:!1,setWrapperSize:!1,virtualTranslate:!1,effect:"slide",breakpoints:void 0,breakpointsBase:"window",spaceBetween:0,slidesPerView:1,slidesPerGroup:1,slidesPerGroupSkip:0,slidesPerGroupAuto:!1,centeredSlides:!1,centeredSlidesBounds:!1,slidesOffsetBefore:0,slidesOffsetAfter:0,normalizeSlideIndex:!0,centerInsufficientSlides:!1,watchOverflow:!0,roundLengths:!1,touchRatio:1,touchAngle:45,simulateTouch:!0,shortSwipes:!0,longSwipes:!0,longSwipesRatio:.5,longSwipesMs:300,followFinger:!0,allowTouchMove:!0,threshold:0,touchMoveStopPropagation:!1,touchStartPreventDefault:!0,touchStartForcePreventDefault:!1,touchReleaseOnEdges:!1,uniqueNavElements:!0,resistance:!0,resistanceRatio:.85,watchSlidesProgress:!1,grabCursor:!1,preventClicks:!0,preventClicksPropagation:!0,slideToClickedSlide:!1,preloadImages:!0,updateOnImagesReady:!0,loop:!1,loopAdditionalSlides:0,loopedSlides:null,loopFillGroupWithBlank:!1,loopPreventsSlide:!0,rewind:!1,allowSlidePrev:!0,allowSlideNext:!0,swipeHandler:null,noSwiping:!0,noSwipingClass:"swiper-no-swiping",noSwipingSelector:null,passiveListeners:!0,maxBackfaceHiddenSlides:10,containerModifierClass:"swiper-",slideClass:"swiper-slide",slideBlankClass:"swiper-slide-invisible-blank",slideActiveClass:"swiper-slide-active",slideDuplicateActiveClass:"swiper-slide-duplicate-active",slideVisibleClass:"swiper-slide-visible",slideDuplicateClass:"swiper-slide-duplicate",slideNextClass:"swiper-slide-next",slideDuplicateNextClass:"swiper-slide-duplicate-next",slidePrevClass:"swiper-slide-prev",slideDuplicatePrevClass:"swiper-slide-duplicate-prev",wrapperClass:"swiper-wrapper",runCallbacksOnInit:!0,_emitClasses:!1};function j(e,t){return function(s){void 0===s&&(s={});const a=Object.keys(s)[0],i=s[a];"object"==typeof i&&null!==i?(["navigation","pagination","scrollbar"].indexOf(a)>=0&&!0===e[a]&&(e[a]={auto:!0}),a in e&&"enabled"in i?(!0===e[a]&&(e[a]={enabled:!0}),"object"!=typeof e[a]||"enabled"in e[a]||(e[a].enabled=!0),e[a]||(e[a]={enabled:!1}),g(t,s)):g(t,s)):g(t,s)}}const _={eventsEmitter:$,update:S,translate:M,transition:{setTransition:function(e,t){const s=this;s.params.cssMode||s.$wrapperEl.transition(e),s.emit("setTransition",e,t)},transitionStart:function(e,t){void 0===e&&(e=!0);const s=this,{params:a}=s;a.cssMode||(a.autoHeight&&s.updateAutoHeight(),P({swiper:s,runCallbacks:e,direction:t,step:"Start"}))},transitionEnd:function(e,t){void 0===e&&(e=!0);const s=this,{params:a}=s;s.animating=!1,a.cssMode||(s.setTransition(0),P({swiper:s,runCallbacks:e,direction:t,step:"End"}))}},slide:k,loop:z,grabCursor:{setGrabCursor:function(e){const t=this;if(t.support.touch||!t.params.simulateTouch||t.params.watchOverflow&&t.isLocked||t.params.cssMode)return;const s="container"===t.params.touchEventsTarget?t.el:t.wrapperEl;s.style.cursor="move",s.style.cursor=e?"grabbing":"grab"},unsetGrabCursor:function(){const e=this;e.support.touch||e.params.watchOverflow&&e.isLocked||e.params.cssMode||(e["container"===e.params.touchEventsTarget?"el":"wrapperEl"].style.cursor="")}},events:X,breakpoints:{setBreakpoint:function(){const e=this,{activeIndex:t,initialized:s,loopedSlides:a=0,params:i,$el:r}=e,n=i.breakpoints;if(!n||n&&0===Object.keys(n).length)return;const l=e.getBreakpoint(n,e.params.breakpointsBase,e.el);if(!l||e.currentBreakpoint===l)return;const o=(l in n?n[l]:void 0)||e.originalParams,d=Y(e,i),c=Y(e,o),p=i.enabled;d&&!c?(r.removeClass(`${i.containerModifierClass}grid ${i.containerModifierClass}grid-column`),e.emitContainerClasses()):!d&&c&&(r.addClass(`${i.containerModifierClass}grid`),(o.grid.fill&&"column"===o.grid.fill||!o.grid.fill&&"column"===i.grid.fill)&&r.addClass(`${i.containerModifierClass}grid-column`),e.emitContainerClasses()),["navigation","pagination","scrollbar"].forEach((t=>{const s=i[t]&&i[t].enabled,a=o[t]&&o[t].enabled;s&&!a&&e[t].disable(),!s&&a&&e[t].enable()}));const u=o.direction&&o.direction!==i.direction,h=i.loop&&(o.slidesPerView!==i.slidesPerView||u);u&&s&&e.changeDirection(),g(e.params,o);const m=e.params.enabled;Object.assign(e,{allowTouchMove:e.params.allowTouchMove,allowSlideNext:e.params.allowSlideNext,allowSlidePrev:e.params.allowSlidePrev}),p&&!m?e.disable():!p&&m&&e.enable(),e.currentBreakpoint=l,e.emit("_beforeBreakpoint",o),h&&s&&(e.loopDestroy(),e.loopCreate(),e.updateSlides(),e.slideTo(t-a+e.loopedSlides,0,!1)),e.emit("breakpoint",o)},getBreakpoint:function(e,t,s){if(void 0===t&&(t="window"),!e||"container"===t&&!s)return;let a=!1;const i=r(),n="window"===t?i.innerHeight:s.clientHeight,l=Object.keys(e).map((e=>{if("string"==typeof e&&0===e.indexOf("@")){const t=parseFloat(e.substr(1));return{value:n*t,point:e}}return{value:e,point:e}}));l.sort(((e,t)=>parseInt(e.value,10)-parseInt(t.value,10)));for(let e=0;e<l.length;e+=1){const{point:r,value:n}=l[e];"window"===t?i.matchMedia(`(min-width: ${n}px)`).matches&&(a=r):n<=s.clientWidth&&(a=r)}return a||"max"}},checkOverflow:{checkOverflow:function(){const e=this,{isLocked:t,params:s}=e,{slidesOffsetBefore:a}=s;if(a){const t=e.slides.length-1,s=e.slidesGrid[t]+e.slidesSizesGrid[t]+2*a;e.isLocked=e.size>s}else e.isLocked=1===e.snapGrid.length;!0===s.allowSlideNext&&(e.allowSlideNext=!e.isLocked),!0===s.allowSlidePrev&&(e.allowSlidePrev=!e.isLocked),t&&t!==e.isLocked&&(e.isEnd=!1),t!==e.isLocked&&e.emit(e.isLocked?"lock":"unlock")}},classes:R,images:{loadImage:function(e,t,s,a,i,n){const l=r();let o;function c(){n&&n()}d(e).parent("picture")[0]||e.complete&&i?c():t?(o=new l.Image,o.onload=c,o.onerror=c,a&&(o.sizes=a),s&&(o.srcset=s),t&&(o.src=t)):c()},preloadImages:function(){const e=this;function t(){null!=e&&e&&!e.destroyed&&(void 0!==e.imagesLoaded&&(e.imagesLoaded+=1),e.imagesLoaded===e.imagesToLoad.length&&(e.params.updateOnImagesReady&&e.update(),e.emit("imagesReady")))}e.imagesToLoad=e.$el.find("img");for(let s=0;s<e.imagesToLoad.length;s+=1){const a=e.imagesToLoad[s];e.loadImage(a,a.currentSrc||a.getAttribute("src"),a.srcset||a.getAttribute("srcset"),a.sizes||a.getAttribute("sizes"),!0,t)}}}},q={};class V{constructor(){let e,t;for(var s=arguments.length,a=new Array(s),i=0;i<s;i++)a[i]=arguments[i];if(1===a.length&&a[0].constructor&&"Object"===Object.prototype.toString.call(a[0]).slice(8,-1)?t=a[0]:[e,t]=a,t||(t={}),t=g({},t),e&&!t.el&&(t.el=e),t.el&&d(t.el).length>1){const e=[];return d(t.el).each((s=>{const a=g({},t,{el:s});e.push(new V(a))})),e}const r=this;r.__swiper__=!0,r.support=E(),r.device=C({userAgent:t.userAgent}),r.browser=T(),r.eventsListeners={},r.eventsAnyListeners=[],r.modules=[...r.__modules__],t.modules&&Array.isArray(t.modules)&&r.modules.push(...t.modules);const n={};r.modules.forEach((e=>{e({swiper:r,extendParams:j(t,n),on:r.on.bind(r),once:r.once.bind(r),off:r.off.bind(r),emit:r.emit.bind(r)})}));const l=g({},W,n);return r.params=g({},l,q,t),r.originalParams=g({},r.params),r.passedParams=g({},t),r.params&&r.params.on&&Object.keys(r.params.on).forEach((e=>{r.on(e,r.params.on[e])})),r.params&&r.params.onAny&&r.onAny(r.params.onAny),r.$=d,Object.assign(r,{enabled:r.params.enabled,el:e,classNames:[],slides:d(),slidesGrid:[],snapGrid:[],slidesSizesGrid:[],isHorizontal:()=>"horizontal"===r.params.direction,isVertical:()=>"vertical"===r.params.direction,activeIndex:0,realIndex:0,isBeginning:!0,isEnd:!1,translate:0,previousTranslate:0,progress:0,velocity:0,animating:!1,allowSlideNext:r.params.allowSlideNext,allowSlidePrev:r.params.allowSlidePrev,touchEvents:function(){const e=["touchstart","touchmove","touchend","touchcancel"],t=["pointerdown","pointermove","pointerup"];return r.touchEventsTouch={start:e[0],move:e[1],end:e[2],cancel:e[3]},r.touchEventsDesktop={start:t[0],move:t[1],end:t[2]},r.support.touch||!r.params.simulateTouch?r.touchEventsTouch:r.touchEventsDesktop}(),touchEventsData:{isTouched:void 0,isMoved:void 0,allowTouchCallbacks:void 0,touchStartTime:void 0,isScrolling:void 0,currentTranslate:void 0,startTranslate:void 0,allowThresholdMove:void 0,focusableElements:r.params.focusableElements,lastClickTime:u(),clickTimeout:void 0,velocities:[],allowMomentumBounce:void 0,isTouchEvent:void 0,startMoving:void 0},allowClick:!0,allowTouchMove:r.params.allowTouchMove,touches:{startX:0,startY:0,currentX:0,currentY:0,diff:0},imagesToLoad:[],imagesLoaded:0}),r.emit("_swiper"),r.params.init&&r.init(),r}enable(){const e=this;e.enabled||(e.enabled=!0,e.params.grabCursor&&e.setGrabCursor(),e.emit("enable"))}disable(){const e=this;e.enabled&&(e.enabled=!1,e.params.grabCursor&&e.unsetGrabCursor(),e.emit("disable"))}setProgress(e,t){const s=this;e=Math.min(Math.max(e,0),1);const a=s.minTranslate(),i=(s.maxTranslate()-a)*e+a;s.translateTo(i,void 0===t?0:t),s.updateActiveIndex(),s.updateSlidesClasses()}emitContainerClasses(){const e=this;if(!e.params._emitClasses||!e.el)return;const t=e.el.className.split(" ").filter((t=>0===t.indexOf("swiper")||0===t.indexOf(e.params.containerModifierClass)));e.emit("_containerClasses",t.join(" "))}getSlideClasses(e){const t=this;return t.destroyed?"":e.className.split(" ").filter((e=>0===e.indexOf("swiper-slide")||0===e.indexOf(t.params.slideClass))).join(" ")}emitSlidesClasses(){const e=this;if(!e.params._emitClasses||!e.el)return;const t=[];e.slides.each((s=>{const a=e.getSlideClasses(s);t.push({slideEl:s,classNames:a}),e.emit("_slideClass",s,a)})),e.emit("_slideClasses",t)}slidesPerViewDynamic(e,t){void 0===e&&(e="current"),void 0===t&&(t=!1);const{params:s,slides:a,slidesGrid:i,slidesSizesGrid:r,size:n,activeIndex:l}=this;let o=1;if(s.centeredSlides){let e,t=a[l].swiperSlideSize;for(let s=l+1;s<a.length;s+=1)a[s]&&!e&&(t+=a[s].swiperSlideSize,o+=1,t>n&&(e=!0));for(let s=l-1;s>=0;s-=1)a[s]&&!e&&(t+=a[s].swiperSlideSize,o+=1,t>n&&(e=!0))}else if("current"===e)for(let e=l+1;e<a.length;e+=1){(t?i[e]+r[e]-i[l]<n:i[e]-i[l]<n)&&(o+=1)}else for(let e=l-1;e>=0;e-=1){i[l]-i[e]<n&&(o+=1)}return o}update(){const e=this;if(!e||e.destroyed)return;const{snapGrid:t,params:s}=e;function a(){const t=e.rtlTranslate?-1*e.translate:e.translate,s=Math.min(Math.max(t,e.maxTranslate()),e.minTranslate());e.setTranslate(s),e.updateActiveIndex(),e.updateSlidesClasses()}let i;s.breakpoints&&e.setBreakpoint(),e.updateSize(),e.updateSlides(),e.updateProgress(),e.updateSlidesClasses(),e.params.freeMode&&e.params.freeMode.enabled?(a(),e.params.autoHeight&&e.updateAutoHeight()):(i=("auto"===e.params.slidesPerView||e.params.slidesPerView>1)&&e.isEnd&&!e.params.centeredSlides?e.slideTo(e.slides.length-1,0,!1,!0):e.slideTo(e.activeIndex,0,!1,!0),i||a()),s.watchOverflow&&t!==e.snapGrid&&e.checkOverflow(),e.emit("update")}changeDirection(e,t){void 0===t&&(t=!0);const s=this,a=s.params.direction;return e||(e="horizontal"===a?"vertical":"horizontal"),e===a||"horizontal"!==e&&"vertical"!==e||(s.$el.removeClass(`${s.params.containerModifierClass}${a}`).addClass(`${s.params.containerModifierClass}${e}`),s.emitContainerClasses(),s.params.direction=e,s.slides.each((t=>{"vertical"===e?t.style.width="":t.style.height=""})),s.emit("changeDirection"),t&&s.update()),s}mount(e){const t=this;if(t.mounted)return!0;const s=d(e||t.params.el);if(!(e=s[0]))return!1;e.swiper=t;const i=()=>`.${(t.params.wrapperClass||"").trim().split(" ").join(".")}`;let r=(()=>{if(e&&e.shadowRoot&&e.shadowRoot.querySelector){const t=d(e.shadowRoot.querySelector(i()));return t.children=e=>s.children(e),t}return s.children?s.children(i()):d(s).children(i())})();if(0===r.length&&t.params.createElements){const e=a().createElement("div");r=d(e),e.className=t.params.wrapperClass,s.append(e),s.children(`.${t.params.slideClass}`).each((e=>{r.append(e)}))}return Object.assign(t,{$el:s,el:e,$wrapperEl:r,wrapperEl:r[0],mounted:!0,rtl:"rtl"===e.dir.toLowerCase()||"rtl"===s.css("direction"),rtlTranslate:"horizontal"===t.params.direction&&("rtl"===e.dir.toLowerCase()||"rtl"===s.css("direction")),wrongRTL:"-webkit-box"===r.css("display")}),!0}init(e){const t=this;if(t.initialized)return t;return!1===t.mount(e)||(t.emit("beforeInit"),t.params.breakpoints&&t.setBreakpoint(),t.addClasses(),t.params.loop&&t.loopCreate(),t.updateSize(),t.updateSlides(),t.params.watchOverflow&&t.checkOverflow(),t.params.grabCursor&&t.enabled&&t.setGrabCursor(),t.params.preloadImages&&t.preloadImages(),t.params.loop?t.slideTo(t.params.initialSlide+t.loopedSlides,0,t.params.runCallbacksOnInit,!1,!0):t.slideTo(t.params.initialSlide,0,t.params.runCallbacksOnInit,!1,!0),t.attachEvents(),t.initialized=!0,t.emit("init"),t.emit("afterInit")),t}destroy(e,t){void 0===e&&(e=!0),void 0===t&&(t=!0);const s=this,{params:a,$el:i,$wrapperEl:r,slides:n}=s;return void 0===s.params||s.destroyed||(s.emit("beforeDestroy"),s.initialized=!1,s.detachEvents(),a.loop&&s.loopDestroy(),t&&(s.removeClasses(),i.removeAttr("style"),r.removeAttr("style"),n&&n.length&&n.removeClass([a.slideVisibleClass,a.slideActiveClass,a.slideNextClass,a.slidePrevClass].join(" ")).removeAttr("style").removeAttr("data-swiper-slide-index")),s.emit("destroy"),Object.keys(s.eventsListeners).forEach((e=>{s.off(e)})),!1!==e&&(s.$el[0].swiper=null,function(e){const t=e;Object.keys(t).forEach((e=>{try{t[e]=null}catch(e){}try{delete t[e]}catch(e){}}))}(s)),s.destroyed=!0),null}static extendDefaults(e){g(q,e)}static get extendedDefaults(){return q}static get defaults(){return W}static installModule(e){V.prototype.__modules__||(V.prototype.__modules__=[]);const t=V.prototype.__modules__;"function"==typeof e&&t.indexOf(e)<0&&t.push(e)}static use(e){return Array.isArray(e)?(e.forEach((e=>V.installModule(e))),V):(V.installModule(e),V)}}function F(e,t,s,i){const r=a();return e.params.createElements&&Object.keys(i).forEach((a=>{if(!s[a]&&!0===s.auto){let n=e.$el.children(`.${i[a]}`)[0];n||(n=r.createElement("div"),n.className=i[a],e.$el.append(n)),s[a]=n,t[a]=n}})),s}function U(e){return void 0===e&&(e=""),`.${e.trim().replace(/([\.:!\/])/g,"\\$1").replace(/ /g,".")}`}function K(e){const t=this,{$wrapperEl:s,params:a}=t;if(a.loop&&t.loopDestroy(),"object"==typeof e&&"length"in e)for(let t=0;t<e.length;t+=1)e[t]&&s.append(e[t]);else s.append(e);a.loop&&t.loopCreate(),a.observer||t.update()}function Z(e){const t=this,{params:s,$wrapperEl:a,activeIndex:i}=t;s.loop&&t.loopDestroy();let r=i+1;if("object"==typeof e&&"length"in e){for(let t=0;t<e.length;t+=1)e[t]&&a.prepend(e[t]);r=i+e.length}else a.prepend(e);s.loop&&t.loopCreate(),s.observer||t.update(),t.slideTo(r,0,!1)}function Q(e,t){const s=this,{$wrapperEl:a,params:i,activeIndex:r}=s;let n=r;i.loop&&(n-=s.loopedSlides,s.loopDestroy(),s.slides=a.children(`.${i.slideClass}`));const l=s.slides.length;if(e<=0)return void s.prependSlide(t);if(e>=l)return void s.appendSlide(t);let o=n>e?n+1:n;const d=[];for(let t=l-1;t>=e;t-=1){const e=s.slides.eq(t);e.remove(),d.unshift(e)}if("object"==typeof t&&"length"in t){for(let e=0;e<t.length;e+=1)t[e]&&a.append(t[e]);o=n>e?n+t.length:n}else a.append(t);for(let e=0;e<d.length;e+=1)a.append(d[e]);i.loop&&s.loopCreate(),i.observer||s.update(),i.loop?s.slideTo(o+s.loopedSlides,0,!1):s.slideTo(o,0,!1)}function J(e){const t=this,{params:s,$wrapperEl:a,activeIndex:i}=t;let r=i;s.loop&&(r-=t.loopedSlides,t.loopDestroy(),t.slides=a.children(`.${s.slideClass}`));let n,l=r;if("object"==typeof e&&"length"in e){for(let s=0;s<e.length;s+=1)n=e[s],t.slides[n]&&t.slides.eq(n).remove(),n<l&&(l-=1);l=Math.max(l,0)}else n=e,t.slides[n]&&t.slides.eq(n).remove(),n<l&&(l-=1),l=Math.max(l,0);s.loop&&t.loopCreate(),s.observer||t.update(),s.loop?t.slideTo(l+t.loopedSlides,0,!1):t.slideTo(l,0,!1)}function ee(){const e=this,t=[];for(let s=0;s<e.slides.length;s+=1)t.push(s);e.removeSlide(t)}function te(e){const{effect:t,swiper:s,on:a,setTranslate:i,setTransition:r,overwriteParams:n,perspective:l,recreateShadows:o,getEffectParams:d}=e;let c;a("beforeInit",(()=>{if(s.params.effect!==t)return;s.classNames.push(`${s.params.containerModifierClass}${t}`),l&&l()&&s.classNames.push(`${s.params.containerModifierClass}3d`);const e=n?n():{};Object.assign(s.params,e),Object.assign(s.originalParams,e)})),a("setTranslate",(()=>{s.params.effect===t&&i()})),a("setTransition",((e,a)=>{s.params.effect===t&&r(a)})),a("transitionEnd",(()=>{if(s.params.effect===t&&o){if(!d||!d().slideShadows)return;s.slides.each((e=>{s.$(e).find(".swiper-slide-shadow-top, .swiper-slide-shadow-right, .swiper-slide-shadow-bottom, .swiper-slide-shadow-left").remove()})),o()}})),a("virtualUpdate",(()=>{s.params.effect===t&&(s.slides.length||(c=!0),requestAnimationFrame((()=>{c&&s.slides&&s.slides.length&&(i(),c=!1)})))}))}function se(e,t){return e.transformEl?t.find(e.transformEl).css({"backface-visibility":"hidden","-webkit-backface-visibility":"hidden"}):t}function ae(e){let{swiper:t,duration:s,transformEl:a,allSlides:i}=e;const{slides:r,activeIndex:n,$wrapperEl:l}=t;if(t.params.virtualTranslate&&0!==s){let e,s=!1;e=i?a?r.find(a):r:a?r.eq(n).find(a):r.eq(n),e.transitionEnd((()=>{if(s)return;if(!t||t.destroyed)return;s=!0,t.animating=!1;const e=["webkitTransitionEnd","transitionend"];for(let t=0;t<e.length;t+=1)l.trigger(e[t])}))}}function ie(e,t,s){const a="swiper-slide-shadow"+(s?`-${s}`:""),i=e.transformEl?t.find(e.transformEl):t;let r=i.children(`.${a}`);return r.length||(r=d(`<div class="swiper-slide-shadow${s?`-${s}`:""}"></div>`),i.append(r)),r}Object.keys(_).forEach((e=>{Object.keys(_[e]).forEach((t=>{V.prototype[t]=_[e][t]}))})),V.use([function(e){let{swiper:t,on:s,emit:a}=e;const i=r();let n=null,l=null;const o=()=>{t&&!t.destroyed&&t.initialized&&(a("beforeResize"),a("resize"))},d=()=>{t&&!t.destroyed&&t.initialized&&a("orientationchange")};s("init",(()=>{t.params.resizeObserver&&void 0!==i.ResizeObserver?t&&!t.destroyed&&t.initialized&&(n=new ResizeObserver((e=>{l=i.requestAnimationFrame((()=>{const{width:s,height:a}=t;let i=s,r=a;e.forEach((e=>{let{contentBoxSize:s,contentRect:a,target:n}=e;n&&n!==t.el||(i=a?a.width:(s[0]||s).inlineSize,r=a?a.height:(s[0]||s).blockSize)})),i===s&&r===a||o()}))})),n.observe(t.el)):(i.addEventListener("resize",o),i.addEventListener("orientationchange",d))})),s("destroy",(()=>{l&&i.cancelAnimationFrame(l),n&&n.unobserve&&t.el&&(n.unobserve(t.el),n=null),i.removeEventListener("resize",o),i.removeEventListener("orientationchange",d)}))},function(e){let{swiper:t,extendParams:s,on:a,emit:i}=e;const n=[],l=r(),o=function(e,t){void 0===t&&(t={});const s=new(l.MutationObserver||l.WebkitMutationObserver)((e=>{if(1===e.length)return void i("observerUpdate",e[0]);const t=function(){i("observerUpdate",e[0])};l.requestAnimationFrame?l.requestAnimationFrame(t):l.setTimeout(t,0)}));s.observe(e,{attributes:void 0===t.attributes||t.attributes,childList:void 0===t.childList||t.childList,characterData:void 0===t.characterData||t.characterData}),n.push(s)};s({observer:!1,observeParents:!1,observeSlideChildren:!1}),a("init",(()=>{if(t.params.observer){if(t.params.observeParents){const e=t.$el.parents();for(let t=0;t<e.length;t+=1)o(e[t])}o(t.$el[0],{childList:t.params.observeSlideChildren}),o(t.$wrapperEl[0],{attributes:!1})}})),a("destroy",(()=>{n.forEach((e=>{e.disconnect()})),n.splice(0,n.length)}))}]);const re=[function(e){let t,{swiper:s,extendParams:a,on:i,emit:r}=e;function n(e,t){const a=s.params.virtual;if(a.cache&&s.virtual.cache[t])return s.virtual.cache[t];const i=a.renderSlide?d(a.renderSlide.call(s,e,t)):d(`<div class="${s.params.slideClass}" data-swiper-slide-index="${t}">${e}</div>`);return i.attr("data-swiper-slide-index")||i.attr("data-swiper-slide-index",t),a.cache&&(s.virtual.cache[t]=i),i}function l(e){const{slidesPerView:t,slidesPerGroup:a,centeredSlides:i}=s.params,{addSlidesBefore:l,addSlidesAfter:o}=s.params.virtual,{from:d,to:c,slides:p,slidesGrid:u,offset:h}=s.virtual;s.params.cssMode||s.updateActiveIndex();const m=s.activeIndex||0;let f,g,v;f=s.rtlTranslate?"right":s.isHorizontal()?"left":"top",i?(g=Math.floor(t/2)+a+o,v=Math.floor(t/2)+a+l):(g=t+(a-1)+o,v=a+l);const w=Math.max((m||0)-v,0),b=Math.min((m||0)+g,p.length-1),x=(s.slidesGrid[w]||0)-(s.slidesGrid[0]||0);function y(){s.updateSlides(),s.updateProgress(),s.updateSlidesClasses(),s.lazy&&s.params.lazy.enabled&&s.lazy.load(),r("virtualUpdate")}if(Object.assign(s.virtual,{from:w,to:b,offset:x,slidesGrid:s.slidesGrid}),d===w&&c===b&&!e)return s.slidesGrid!==u&&x!==h&&s.slides.css(f,`${x}px`),s.updateProgress(),void r("virtualUpdate");if(s.params.virtual.renderExternal)return s.params.virtual.renderExternal.call(s,{offset:x,from:w,to:b,slides:function(){const e=[];for(let t=w;t<=b;t+=1)e.push(p[t]);return e}()}),void(s.params.virtual.renderExternalUpdate?y():r("virtualUpdate"));const E=[],C=[];if(e)s.$wrapperEl.find(`.${s.params.slideClass}`).remove();else for(let e=d;e<=c;e+=1)(e<w||e>b)&&s.$wrapperEl.find(`.${s.params.slideClass}[data-swiper-slide-index="${e}"]`).remove();for(let t=0;t<p.length;t+=1)t>=w&&t<=b&&(void 0===c||e?C.push(t):(t>c&&C.push(t),t<d&&E.push(t)));C.forEach((e=>{s.$wrapperEl.append(n(p[e],e))})),E.sort(((e,t)=>t-e)).forEach((e=>{s.$wrapperEl.prepend(n(p[e],e))})),s.$wrapperEl.children(".swiper-slide").css(f,`${x}px`),y()}a({virtual:{enabled:!1,slides:[],cache:!0,renderSlide:null,renderExternal:null,renderExternalUpdate:!0,addSlidesBefore:0,addSlidesAfter:0}}),s.virtual={cache:{},from:void 0,to:void 0,slides:[],offset:0,slidesGrid:[]},i("beforeInit",(()=>{s.params.virtual.enabled&&(s.virtual.slides=s.params.virtual.slides,s.classNames.push(`${s.params.containerModifierClass}virtual`),s.params.watchSlidesProgress=!0,s.originalParams.watchSlidesProgress=!0,s.params.initialSlide||l())})),i("setTranslate",(()=>{s.params.virtual.enabled&&(s.params.cssMode&&!s._immediateVirtual?(clearTimeout(t),t=setTimeout((()=>{l()}),100)):l())})),i("init update resize",(()=>{s.params.virtual.enabled&&s.params.cssMode&&v(s.wrapperEl,"--swiper-virtual-size",`${s.virtualSize}px`)})),Object.assign(s.virtual,{appendSlide:function(e){if("object"==typeof e&&"length"in e)for(let t=0;t<e.length;t+=1)e[t]&&s.virtual.slides.push(e[t]);else s.virtual.slides.push(e);l(!0)},prependSlide:function(e){const t=s.activeIndex;let a=t+1,i=1;if(Array.isArray(e)){for(let t=0;t<e.length;t+=1)e[t]&&s.virtual.slides.unshift(e[t]);a=t+e.length,i=e.length}else s.virtual.slides.unshift(e);if(s.params.virtual.cache){const e=s.virtual.cache,t={};Object.keys(e).forEach((s=>{const a=e[s],r=a.attr("data-swiper-slide-index");r&&a.attr("data-swiper-slide-index",parseInt(r,10)+i),t[parseInt(s,10)+i]=a})),s.virtual.cache=t}l(!0),s.slideTo(a,0)},removeSlide:function(e){if(null==e)return;let t=s.activeIndex;if(Array.isArray(e))for(let a=e.length-1;a>=0;a-=1)s.virtual.slides.splice(e[a],1),s.params.virtual.cache&&delete s.virtual.cache[e[a]],e[a]<t&&(t-=1),t=Math.max(t,0);else s.virtual.slides.splice(e,1),s.params.virtual.cache&&delete s.virtual.cache[e],e<t&&(t-=1),t=Math.max(t,0);l(!0),s.slideTo(t,0)},removeAllSlides:function(){s.virtual.slides=[],s.params.virtual.cache&&(s.virtual.cache={}),l(!0),s.slideTo(0,0)},update:l})},function(e){let{swiper:t,extendParams:s,on:i,emit:n}=e;const l=a(),o=r();function c(e){if(!t.enabled)return;const{rtlTranslate:s}=t;let a=e;a.originalEvent&&(a=a.originalEvent);const i=a.keyCode||a.charCode,r=t.params.keyboard.pageUpDown,d=r&&33===i,c=r&&34===i,p=37===i,u=39===i,h=38===i,m=40===i;if(!t.allowSlideNext&&(t.isHorizontal()&&u||t.isVertical()&&m||c))return!1;if(!t.allowSlidePrev&&(t.isHorizontal()&&p||t.isVertical()&&h||d))return!1;if(!(a.shiftKey||a.altKey||a.ctrlKey||a.metaKey||l.activeElement&&l.activeElement.nodeName&&("input"===l.activeElement.nodeName.toLowerCase()||"textarea"===l.activeElement.nodeName.toLowerCase()))){if(t.params.keyboard.onlyInViewport&&(d||c||p||u||h||m)){let e=!1;if(t.$el.parents(`.${t.params.slideClass}`).length>0&&0===t.$el.parents(`.${t.params.slideActiveClass}`).length)return;const a=t.$el,i=a[0].clientWidth,r=a[0].clientHeight,n=o.innerWidth,l=o.innerHeight,d=t.$el.offset();s&&(d.left-=t.$el[0].scrollLeft);const c=[[d.left,d.top],[d.left+i,d.top],[d.left,d.top+r],[d.left+i,d.top+r]];for(let t=0;t<c.length;t+=1){const s=c[t];if(s[0]>=0&&s[0]<=n&&s[1]>=0&&s[1]<=l){if(0===s[0]&&0===s[1])continue;e=!0}}if(!e)return}t.isHorizontal()?((d||c||p||u)&&(a.preventDefault?a.preventDefault():a.returnValue=!1),((c||u)&&!s||(d||p)&&s)&&t.slideNext(),((d||p)&&!s||(c||u)&&s)&&t.slidePrev()):((d||c||h||m)&&(a.preventDefault?a.preventDefault():a.returnValue=!1),(c||m)&&t.slideNext(),(d||h)&&t.slidePrev()),n("keyPress",i)}}function p(){t.keyboard.enabled||(d(l).on("keydown",c),t.keyboard.enabled=!0)}function u(){t.keyboard.enabled&&(d(l).off("keydown",c),t.keyboard.enabled=!1)}t.keyboard={enabled:!1},s({keyboard:{enabled:!1,onlyInViewport:!0,pageUpDown:!0}}),i("init",(()=>{t.params.keyboard.enabled&&p()})),i("destroy",(()=>{t.keyboard.enabled&&u()})),Object.assign(t.keyboard,{enable:p,disable:u})},function(e){let{swiper:t,extendParams:s,on:a,emit:i}=e;const n=r();let l;s({mousewheel:{enabled:!1,releaseOnEdges:!1,invert:!1,forceToAxis:!1,sensitivity:1,eventsTarget:"container",thresholdDelta:null,thresholdTime:null}}),t.mousewheel={enabled:!1};let o,c=u();const h=[];function m(){t.enabled&&(t.mouseEntered=!0)}function f(){t.enabled&&(t.mouseEntered=!1)}function g(e){return!(t.params.mousewheel.thresholdDelta&&e.delta<t.params.mousewheel.thresholdDelta)&&(!(t.params.mousewheel.thresholdTime&&u()-c<t.params.mousewheel.thresholdTime)&&(e.delta>=6&&u()-c<60||(e.direction<0?t.isEnd&&!t.params.loop||t.animating||(t.slideNext(),i("scroll",e.raw)):t.isBeginning&&!t.params.loop||t.animating||(t.slidePrev(),i("scroll",e.raw)),c=(new n.Date).getTime(),!1)))}function v(e){let s=e,a=!0;if(!t.enabled)return;const r=t.params.mousewheel;t.params.cssMode&&s.preventDefault();let n=t.$el;if("container"!==t.params.mousewheel.eventsTarget&&(n=d(t.params.mousewheel.eventsTarget)),!t.mouseEntered&&!n[0].contains(s.target)&&!r.releaseOnEdges)return!0;s.originalEvent&&(s=s.originalEvent);let c=0;const m=t.rtlTranslate?-1:1,f=function(e){let t=0,s=0,a=0,i=0;return"detail"in e&&(s=e.detail),"wheelDelta"in e&&(s=-e.wheelDelta/120),"wheelDeltaY"in e&&(s=-e.wheelDeltaY/120),"wheelDeltaX"in e&&(t=-e.wheelDeltaX/120),"axis"in e&&e.axis===e.HORIZONTAL_AXIS&&(t=s,s=0),a=10*t,i=10*s,"deltaY"in e&&(i=e.deltaY),"deltaX"in e&&(a=e.deltaX),e.shiftKey&&!a&&(a=i,i=0),(a||i)&&e.deltaMode&&(1===e.deltaMode?(a*=40,i*=40):(a*=800,i*=800)),a&&!t&&(t=a<1?-1:1),i&&!s&&(s=i<1?-1:1),{spinX:t,spinY:s,pixelX:a,pixelY:i}}(s);if(r.forceToAxis)if(t.isHorizontal()){if(!(Math.abs(f.pixelX)>Math.abs(f.pixelY)))return!0;c=-f.pixelX*m}else{if(!(Math.abs(f.pixelY)>Math.abs(f.pixelX)))return!0;c=-f.pixelY}else c=Math.abs(f.pixelX)>Math.abs(f.pixelY)?-f.pixelX*m:-f.pixelY;if(0===c)return!0;r.invert&&(c=-c);let v=t.getTranslate()+c*r.sensitivity;if(v>=t.minTranslate()&&(v=t.minTranslate()),v<=t.maxTranslate()&&(v=t.maxTranslate()),a=!!t.params.loop||!(v===t.minTranslate()||v===t.maxTranslate()),a&&t.params.nested&&s.stopPropagation(),t.params.freeMode&&t.params.freeMode.enabled){const e={time:u(),delta:Math.abs(c),direction:Math.sign(c)},a=o&&e.time<o.time+500&&e.delta<=o.delta&&e.direction===o.direction;if(!a){o=void 0,t.params.loop&&t.loopFix();let n=t.getTranslate()+c*r.sensitivity;const d=t.isBeginning,u=t.isEnd;if(n>=t.minTranslate()&&(n=t.minTranslate()),n<=t.maxTranslate()&&(n=t.maxTranslate()),t.setTransition(0),t.setTranslate(n),t.updateProgress(),t.updateActiveIndex(),t.updateSlidesClasses(),(!d&&t.isBeginning||!u&&t.isEnd)&&t.updateSlidesClasses(),t.params.freeMode.sticky){clearTimeout(l),l=void 0,h.length>=15&&h.shift();const s=h.length?h[h.length-1]:void 0,a=h[0];if(h.push(e),s&&(e.delta>s.delta||e.direction!==s.direction))h.splice(0);else if(h.length>=15&&e.time-a.time<500&&a.delta-e.delta>=1&&e.delta<=6){const s=c>0?.8:.2;o=e,h.splice(0),l=p((()=>{t.slideToClosest(t.params.speed,!0,void 0,s)}),0)}l||(l=p((()=>{o=e,h.splice(0),t.slideToClosest(t.params.speed,!0,void 0,.5)}),500))}if(a||i("scroll",s),t.params.autoplay&&t.params.autoplayDisableOnInteraction&&t.autoplay.stop(),n===t.minTranslate()||n===t.maxTranslate())return!0}}else{const s={time:u(),delta:Math.abs(c),direction:Math.sign(c),raw:e};h.length>=2&&h.shift();const a=h.length?h[h.length-1]:void 0;if(h.push(s),a?(s.direction!==a.direction||s.delta>a.delta||s.time>a.time+150)&&g(s):g(s),function(e){const s=t.params.mousewheel;if(e.direction<0){if(t.isEnd&&!t.params.loop&&s.releaseOnEdges)return!0}else if(t.isBeginning&&!t.params.loop&&s.releaseOnEdges)return!0;return!1}(s))return!0}return s.preventDefault?s.preventDefault():s.returnValue=!1,!1}function w(e){let s=t.$el;"container"!==t.params.mousewheel.eventsTarget&&(s=d(t.params.mousewheel.eventsTarget)),s[e]("mouseenter",m),s[e]("mouseleave",f),s[e]("wheel",v)}function b(){return t.params.cssMode?(t.wrapperEl.removeEventListener("wheel",v),!0):!t.mousewheel.enabled&&(w("on"),t.mousewheel.enabled=!0,!0)}function x(){return t.params.cssMode?(t.wrapperEl.addEventListener(event,v),!0):!!t.mousewheel.enabled&&(w("off"),t.mousewheel.enabled=!1,!0)}a("init",(()=>{!t.params.mousewheel.enabled&&t.params.cssMode&&x(),t.params.mousewheel.enabled&&b()})),a("destroy",(()=>{t.params.cssMode&&b(),t.mousewheel.enabled&&x()})),Object.assign(t.mousewheel,{enable:b,disable:x})},function(e){let{swiper:t,extendParams:s,on:a,emit:i}=e;function r(e){let s;return e&&(s=d(e),t.params.uniqueNavElements&&"string"==typeof e&&s.length>1&&1===t.$el.find(e).length&&(s=t.$el.find(e))),s}function n(e,s){const a=t.params.navigation;e&&e.length>0&&(e[s?"addClass":"removeClass"](a.disabledClass),e[0]&&"BUTTON"===e[0].tagName&&(e[0].disabled=s),t.params.watchOverflow&&t.enabled&&e[t.isLocked?"addClass":"removeClass"](a.lockClass))}function l(){if(t.params.loop)return;const{$nextEl:e,$prevEl:s}=t.navigation;n(s,t.isBeginning&&!t.params.rewind),n(e,t.isEnd&&!t.params.rewind)}function o(e){e.preventDefault(),(!t.isBeginning||t.params.loop||t.params.rewind)&&t.slidePrev()}function c(e){e.preventDefault(),(!t.isEnd||t.params.loop||t.params.rewind)&&t.slideNext()}function p(){const e=t.params.navigation;if(t.params.navigation=F(t,t.originalParams.navigation,t.params.navigation,{nextEl:"swiper-button-next",prevEl:"swiper-button-prev"}),!e.nextEl&&!e.prevEl)return;const s=r(e.nextEl),a=r(e.prevEl);s&&s.length>0&&s.on("click",c),a&&a.length>0&&a.on("click",o),Object.assign(t.navigation,{$nextEl:s,nextEl:s&&s[0],$prevEl:a,prevEl:a&&a[0]}),t.enabled||(s&&s.addClass(e.lockClass),a&&a.addClass(e.lockClass))}function u(){const{$nextEl:e,$prevEl:s}=t.navigation;e&&e.length&&(e.off("click",c),e.removeClass(t.params.navigation.disabledClass)),s&&s.length&&(s.off("click",o),s.removeClass(t.params.navigation.disabledClass))}s({navigation:{nextEl:null,prevEl:null,hideOnClick:!1,disabledClass:"swiper-button-disabled",hiddenClass:"swiper-button-hidden",lockClass:"swiper-button-lock",navigationDisabledClass:"swiper-navigation-disabled"}}),t.navigation={nextEl:null,$nextEl:null,prevEl:null,$prevEl:null},a("init",(()=>{!1===t.params.navigation.enabled?h():(p(),l())})),a("toEdge fromEdge lock unlock",(()=>{l()})),a("destroy",(()=>{u()})),a("enable disable",(()=>{const{$nextEl:e,$prevEl:s}=t.navigation;e&&e[t.enabled?"removeClass":"addClass"](t.params.navigation.lockClass),s&&s[t.enabled?"removeClass":"addClass"](t.params.navigation.lockClass)})),a("click",((e,s)=>{const{$nextEl:a,$prevEl:r}=t.navigation,n=s.target;if(t.params.navigation.hideOnClick&&!d(n).is(r)&&!d(n).is(a)){if(t.pagination&&t.params.pagination&&t.params.pagination.clickable&&(t.pagination.el===n||t.pagination.el.contains(n)))return;let e;a?e=a.hasClass(t.params.navigation.hiddenClass):r&&(e=r.hasClass(t.params.navigation.hiddenClass)),i(!0===e?"navigationShow":"navigationHide"),a&&a.toggleClass(t.params.navigation.hiddenClass),r&&r.toggleClass(t.params.navigation.hiddenClass)}}));const h=()=>{t.$el.addClass(t.params.navigation.navigationDisabledClass),u()};Object.assign(t.navigation,{enable:()=>{t.$el.removeClass(t.params.navigation.navigationDisabledClass),p(),l()},disable:h,update:l,init:p,destroy:u})},function(e){let{swiper:t,extendParams:s,on:a,emit:i}=e;const r="swiper-pagination";let n;s({pagination:{el:null,bulletElement:"span",clickable:!1,hideOnClick:!1,renderBullet:null,renderProgressbar:null,renderFraction:null,renderCustom:null,progressbarOpposite:!1,type:"bullets",dynamicBullets:!1,dynamicMainBullets:1,formatFractionCurrent:e=>e,formatFractionTotal:e=>e,bulletClass:`${r}-bullet`,bulletActiveClass:`${r}-bullet-active`,modifierClass:`${r}-`,currentClass:`${r}-current`,totalClass:`${r}-total`,hiddenClass:`${r}-hidden`,progressbarFillClass:`${r}-progressbar-fill`,progressbarOppositeClass:`${r}-progressbar-opposite`,clickableClass:`${r}-clickable`,lockClass:`${r}-lock`,horizontalClass:`${r}-horizontal`,verticalClass:`${r}-vertical`,paginationDisabledClass:`${r}-disabled`}}),t.pagination={el:null,$el:null,bullets:[]};let l=0;function o(){return!t.params.pagination.el||!t.pagination.el||!t.pagination.$el||0===t.pagination.$el.length}function c(e,s){const{bulletActiveClass:a}=t.params.pagination;e[s]().addClass(`${a}-${s}`)[s]().addClass(`${a}-${s}-${s}`)}function p(){const e=t.rtl,s=t.params.pagination;if(o())return;const a=t.virtual&&t.params.virtual.enabled?t.virtual.slides.length:t.slides.length,r=t.pagination.$el;let p;const u=t.params.loop?Math.ceil((a-2*t.loopedSlides)/t.params.slidesPerGroup):t.snapGrid.length;if(t.params.loop?(p=Math.ceil((t.activeIndex-t.loopedSlides)/t.params.slidesPerGroup),p>a-1-2*t.loopedSlides&&(p-=a-2*t.loopedSlides),p>u-1&&(p-=u),p<0&&"bullets"!==t.params.paginationType&&(p=u+p)):p=void 0!==t.snapIndex?t.snapIndex:t.activeIndex||0,"bullets"===s.type&&t.pagination.bullets&&t.pagination.bullets.length>0){const a=t.pagination.bullets;let i,o,u;if(s.dynamicBullets&&(n=a.eq(0)[t.isHorizontal()?"outerWidth":"outerHeight"](!0),r.css(t.isHorizontal()?"width":"height",n*(s.dynamicMainBullets+4)+"px"),s.dynamicMainBullets>1&&void 0!==t.previousIndex&&(l+=p-(t.previousIndex-t.loopedSlides||0),l>s.dynamicMainBullets-1?l=s.dynamicMainBullets-1:l<0&&(l=0)),i=Math.max(p-l,0),o=i+(Math.min(a.length,s.dynamicMainBullets)-1),u=(o+i)/2),a.removeClass(["","-next","-next-next","-prev","-prev-prev","-main"].map((e=>`${s.bulletActiveClass}${e}`)).join(" ")),r.length>1)a.each((e=>{const t=d(e),a=t.index();a===p&&t.addClass(s.bulletActiveClass),s.dynamicBullets&&(a>=i&&a<=o&&t.addClass(`${s.bulletActiveClass}-main`),a===i&&c(t,"prev"),a===o&&c(t,"next"))}));else{const e=a.eq(p),r=e.index();if(e.addClass(s.bulletActiveClass),s.dynamicBullets){const e=a.eq(i),n=a.eq(o);for(let e=i;e<=o;e+=1)a.eq(e).addClass(`${s.bulletActiveClass}-main`);if(t.params.loop)if(r>=a.length){for(let e=s.dynamicMainBullets;e>=0;e-=1)a.eq(a.length-e).addClass(`${s.bulletActiveClass}-main`);a.eq(a.length-s.dynamicMainBullets-1).addClass(`${s.bulletActiveClass}-prev`)}else c(e,"prev"),c(n,"next");else c(e,"prev"),c(n,"next")}}if(s.dynamicBullets){const i=Math.min(a.length,s.dynamicMainBullets+4),r=(n*i-n)/2-u*n,l=e?"right":"left";a.css(t.isHorizontal()?l:"top",`${r}px`)}}if("fraction"===s.type&&(r.find(U(s.currentClass)).text(s.formatFractionCurrent(p+1)),r.find(U(s.totalClass)).text(s.formatFractionTotal(u))),"progressbar"===s.type){let e;e=s.progressbarOpposite?t.isHorizontal()?"vertical":"horizontal":t.isHorizontal()?"horizontal":"vertical";const a=(p+1)/u;let i=1,n=1;"horizontal"===e?i=a:n=a,r.find(U(s.progressbarFillClass)).transform(`translate3d(0,0,0) scaleX(${i}) scaleY(${n})`).transition(t.params.speed)}"custom"===s.type&&s.renderCustom?(r.html(s.renderCustom(t,p+1,u)),i("paginationRender",r[0])):i("paginationUpdate",r[0]),t.params.watchOverflow&&t.enabled&&r[t.isLocked?"addClass":"removeClass"](s.lockClass)}function u(){const e=t.params.pagination;if(o())return;const s=t.virtual&&t.params.virtual.enabled?t.virtual.slides.length:t.slides.length,a=t.pagination.$el;let r="";if("bullets"===e.type){let i=t.params.loop?Math.ceil((s-2*t.loopedSlides)/t.params.slidesPerGroup):t.snapGrid.length;t.params.freeMode&&t.params.freeMode.enabled&&!t.params.loop&&i>s&&(i=s);for(let s=0;s<i;s+=1)e.renderBullet?r+=e.renderBullet.call(t,s,e.bulletClass):r+=`<${e.bulletElement} class="${e.bulletClass}"></${e.bulletElement}>`;a.html(r),t.pagination.bullets=a.find(U(e.bulletClass))}"fraction"===e.type&&(r=e.renderFraction?e.renderFraction.call(t,e.currentClass,e.totalClass):`<span class="${e.currentClass}"></span> / <span class="${e.totalClass}"></span>`,a.html(r)),"progressbar"===e.type&&(r=e.renderProgressbar?e.renderProgressbar.call(t,e.progressbarFillClass):`<span class="${e.progressbarFillClass}"></span>`,a.html(r)),"custom"!==e.type&&i("paginationRender",t.pagination.$el[0])}function h(){t.params.pagination=F(t,t.originalParams.pagination,t.params.pagination,{el:"swiper-pagination"});const e=t.params.pagination;if(!e.el)return;let s=d(e.el);0!==s.length&&(t.params.uniqueNavElements&&"string"==typeof e.el&&s.length>1&&(s=t.$el.find(e.el),s.length>1&&(s=s.filter((e=>d(e).parents(".swiper")[0]===t.el)))),"bullets"===e.type&&e.clickable&&s.addClass(e.clickableClass),s.addClass(e.modifierClass+e.type),s.addClass(t.isHorizontal()?e.horizontalClass:e.verticalClass),"bullets"===e.type&&e.dynamicBullets&&(s.addClass(`${e.modifierClass}${e.type}-dynamic`),l=0,e.dynamicMainBullets<1&&(e.dynamicMainBullets=1)),"progressbar"===e.type&&e.progressbarOpposite&&s.addClass(e.progressbarOppositeClass),e.clickable&&s.on("click",U(e.bulletClass),(function(e){e.preventDefault();let s=d(this).index()*t.params.slidesPerGroup;t.params.loop&&(s+=t.loopedSlides),t.slideTo(s)})),Object.assign(t.pagination,{$el:s,el:s[0]}),t.enabled||s.addClass(e.lockClass))}function m(){const e=t.params.pagination;if(o())return;const s=t.pagination.$el;s.removeClass(e.hiddenClass),s.removeClass(e.modifierClass+e.type),s.removeClass(t.isHorizontal()?e.horizontalClass:e.verticalClass),t.pagination.bullets&&t.pagination.bullets.removeClass&&t.pagination.bullets.removeClass(e.bulletActiveClass),e.clickable&&s.off("click",U(e.bulletClass))}a("init",(()=>{!1===t.params.pagination.enabled?f():(h(),u(),p())})),a("activeIndexChange",(()=>{(t.params.loop||void 0===t.snapIndex)&&p()})),a("snapIndexChange",(()=>{t.params.loop||p()})),a("slidesLengthChange",(()=>{t.params.loop&&(u(),p())})),a("snapGridLengthChange",(()=>{t.params.loop||(u(),p())})),a("destroy",(()=>{m()})),a("enable disable",(()=>{const{$el:e}=t.pagination;e&&e[t.enabled?"removeClass":"addClass"](t.params.pagination.lockClass)})),a("lock unlock",(()=>{p()})),a("click",((e,s)=>{const a=s.target,{$el:r}=t.pagination;if(t.params.pagination.el&&t.params.pagination.hideOnClick&&r.length>0&&!d(a).hasClass(t.params.pagination.bulletClass)){if(t.navigation&&(t.navigation.nextEl&&a===t.navigation.nextEl||t.navigation.prevEl&&a===t.navigation.prevEl))return;const e=r.hasClass(t.params.pagination.hiddenClass);i(!0===e?"paginationShow":"paginationHide"),r.toggleClass(t.params.pagination.hiddenClass)}}));const f=()=>{t.$el.addClass(t.params.pagination.paginationDisabledClass),t.pagination.$el&&t.pagination.$el.addClass(t.params.pagination.paginationDisabledClass),m()};Object.assign(t.pagination,{enable:()=>{t.$el.removeClass(t.params.pagination.paginationDisabledClass),t.pagination.$el&&t.pagination.$el.removeClass(t.params.pagination.paginationDisabledClass),h(),u(),p()},disable:f,render:u,update:p,init:h,destroy:m})},function(e){let{swiper:t,extendParams:s,on:i,emit:r}=e;const n=a();let l,o,c,u,h=!1,m=null,f=null;function g(){if(!t.params.scrollbar.el||!t.scrollbar.el)return;const{scrollbar:e,rtlTranslate:s,progress:a}=t,{$dragEl:i,$el:r}=e,n=t.params.scrollbar;let l=o,d=(c-o)*a;s?(d=-d,d>0?(l=o-d,d=0):-d+o>c&&(l=c+d)):d<0?(l=o+d,d=0):d+o>c&&(l=c-d),t.isHorizontal()?(i.transform(`translate3d(${d}px, 0, 0)`),i[0].style.width=`${l}px`):(i.transform(`translate3d(0px, ${d}px, 0)`),i[0].style.height=`${l}px`),n.hide&&(clearTimeout(m),r[0].style.opacity=1,m=setTimeout((()=>{r[0].style.opacity=0,r.transition(400)}),1e3))}function v(){if(!t.params.scrollbar.el||!t.scrollbar.el)return;const{scrollbar:e}=t,{$dragEl:s,$el:a}=e;s[0].style.width="",s[0].style.height="",c=t.isHorizontal()?a[0].offsetWidth:a[0].offsetHeight,u=t.size/(t.virtualSize+t.params.slidesOffsetBefore-(t.params.centeredSlides?t.snapGrid[0]:0)),o="auto"===t.params.scrollbar.dragSize?c*u:parseInt(t.params.scrollbar.dragSize,10),t.isHorizontal()?s[0].style.width=`${o}px`:s[0].style.height=`${o}px`,a[0].style.display=u>=1?"none":"",t.params.scrollbar.hide&&(a[0].style.opacity=0),t.params.watchOverflow&&t.enabled&&e.$el[t.isLocked?"addClass":"removeClass"](t.params.scrollbar.lockClass)}function w(e){return t.isHorizontal()?"touchstart"===e.type||"touchmove"===e.type?e.targetTouches[0].clientX:e.clientX:"touchstart"===e.type||"touchmove"===e.type?e.targetTouches[0].clientY:e.clientY}function b(e){const{scrollbar:s,rtlTranslate:a}=t,{$el:i}=s;let r;r=(w(e)-i.offset()[t.isHorizontal()?"left":"top"]-(null!==l?l:o/2))/(c-o),r=Math.max(Math.min(r,1),0),a&&(r=1-r);const n=t.minTranslate()+(t.maxTranslate()-t.minTranslate())*r;t.updateProgress(n),t.setTranslate(n),t.updateActiveIndex(),t.updateSlidesClasses()}function x(e){const s=t.params.scrollbar,{scrollbar:a,$wrapperEl:i}=t,{$el:n,$dragEl:o}=a;h=!0,l=e.target===o[0]||e.target===o?w(e)-e.target.getBoundingClientRect()[t.isHorizontal()?"left":"top"]:null,e.preventDefault(),e.stopPropagation(),i.transition(100),o.transition(100),b(e),clearTimeout(f),n.transition(0),s.hide&&n.css("opacity",1),t.params.cssMode&&t.$wrapperEl.css("scroll-snap-type","none"),r("scrollbarDragStart",e)}function y(e){const{scrollbar:s,$wrapperEl:a}=t,{$el:i,$dragEl:n}=s;h&&(e.preventDefault?e.preventDefault():e.returnValue=!1,b(e),a.transition(0),i.transition(0),n.transition(0),r("scrollbarDragMove",e))}function E(e){const s=t.params.scrollbar,{scrollbar:a,$wrapperEl:i}=t,{$el:n}=a;h&&(h=!1,t.params.cssMode&&(t.$wrapperEl.css("scroll-snap-type",""),i.transition("")),s.hide&&(clearTimeout(f),f=p((()=>{n.css("opacity",0),n.transition(400)}),1e3)),r("scrollbarDragEnd",e),s.snapOnRelease&&t.slideToClosest())}function C(e){const{scrollbar:s,touchEventsTouch:a,touchEventsDesktop:i,params:r,support:l}=t,o=s.$el;if(!o)return;const d=o[0],c=!(!l.passiveListener||!r.passiveListeners)&&{passive:!1,capture:!1},p=!(!l.passiveListener||!r.passiveListeners)&&{passive:!0,capture:!1};if(!d)return;const u="on"===e?"addEventListener":"removeEventListener";l.touch?(d[u](a.start,x,c),d[u](a.move,y,c),d[u](a.end,E,p)):(d[u](i.start,x,c),n[u](i.move,y,c),n[u](i.end,E,p))}function T(){const{scrollbar:e,$el:s}=t;t.params.scrollbar=F(t,t.originalParams.scrollbar,t.params.scrollbar,{el:"swiper-scrollbar"});const a=t.params.scrollbar;if(!a.el)return;let i=d(a.el);t.params.uniqueNavElements&&"string"==typeof a.el&&i.length>1&&1===s.find(a.el).length&&(i=s.find(a.el)),i.addClass(t.isHorizontal()?a.horizontalClass:a.verticalClass);let r=i.find(`.${t.params.scrollbar.dragClass}`);0===r.length&&(r=d(`<div class="${t.params.scrollbar.dragClass}"></div>`),i.append(r)),Object.assign(e,{$el:i,el:i[0],$dragEl:r,dragEl:r[0]}),a.draggable&&t.params.scrollbar.el&&t.scrollbar.el&&C("on"),i&&i[t.enabled?"removeClass":"addClass"](t.params.scrollbar.lockClass)}function $(){const e=t.params.scrollbar,s=t.scrollbar.$el;s&&s.removeClass(t.isHorizontal()?e.horizontalClass:e.verticalClass),t.params.scrollbar.el&&t.scrollbar.el&&C("off")}s({scrollbar:{el:null,dragSize:"auto",hide:!1,draggable:!1,snapOnRelease:!0,lockClass:"swiper-scrollbar-lock",dragClass:"swiper-scrollbar-drag",scrollbarDisabledClass:"swiper-scrollbar-disabled",horizontalClass:"swiper-scrollbar-horizontal",verticalClass:"swiper-scrollbar-vertical"}}),t.scrollbar={el:null,dragEl:null,$el:null,$dragEl:null},i("init",(()=>{!1===t.params.scrollbar.enabled?S():(T(),v(),g())})),i("update resize observerUpdate lock unlock",(()=>{v()})),i("setTranslate",(()=>{g()})),i("setTransition",((e,s)=>{!function(e){t.params.scrollbar.el&&t.scrollbar.el&&t.scrollbar.$dragEl.transition(e)}(s)})),i("enable disable",(()=>{const{$el:e}=t.scrollbar;e&&e[t.enabled?"removeClass":"addClass"](t.params.scrollbar.lockClass)})),i("destroy",(()=>{$()}));const S=()=>{t.$el.addClass(t.params.scrollbar.scrollbarDisabledClass),t.scrollbar.$el&&t.scrollbar.$el.addClass(t.params.scrollbar.scrollbarDisabledClass),$()};Object.assign(t.scrollbar,{enable:()=>{t.$el.removeClass(t.params.scrollbar.scrollbarDisabledClass),t.scrollbar.$el&&t.scrollbar.$el.removeClass(t.params.scrollbar.scrollbarDisabledClass),T(),v(),g()},disable:S,updateSize:v,setTranslate:g,init:T,destroy:$})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({parallax:{enabled:!1}});const i=(e,s)=>{const{rtl:a}=t,i=d(e),r=a?-1:1,n=i.attr("data-swiper-parallax")||"0";let l=i.attr("data-swiper-parallax-x"),o=i.attr("data-swiper-parallax-y");const c=i.attr("data-swiper-parallax-scale"),p=i.attr("data-swiper-parallax-opacity");if(l||o?(l=l||"0",o=o||"0"):t.isHorizontal()?(l=n,o="0"):(o=n,l="0"),l=l.indexOf("%")>=0?parseInt(l,10)*s*r+"%":l*s*r+"px",o=o.indexOf("%")>=0?parseInt(o,10)*s+"%":o*s+"px",null!=p){const e=p-(p-1)*(1-Math.abs(s));i[0].style.opacity=e}if(null==c)i.transform(`translate3d(${l}, ${o}, 0px)`);else{const e=c-(c-1)*(1-Math.abs(s));i.transform(`translate3d(${l}, ${o}, 0px) scale(${e})`)}},r=()=>{const{$el:e,slides:s,progress:a,snapGrid:r}=t;e.children("[data-swiper-parallax], [data-swiper-parallax-x], [data-swiper-parallax-y], [data-swiper-parallax-opacity], [data-swiper-parallax-scale]").each((e=>{i(e,a)})),s.each(((e,s)=>{let n=e.progress;t.params.slidesPerGroup>1&&"auto"!==t.params.slidesPerView&&(n+=Math.ceil(s/2)-a*(r.length-1)),n=Math.min(Math.max(n,-1),1),d(e).find("[data-swiper-parallax], [data-swiper-parallax-x], [data-swiper-parallax-y], [data-swiper-parallax-opacity], [data-swiper-parallax-scale]").each((e=>{i(e,n)}))}))};a("beforeInit",(()=>{t.params.parallax.enabled&&(t.params.watchSlidesProgress=!0,t.originalParams.watchSlidesProgress=!0)})),a("init",(()=>{t.params.parallax.enabled&&r()})),a("setTranslate",(()=>{t.params.parallax.enabled&&r()})),a("setTransition",((e,s)=>{t.params.parallax.enabled&&function(e){void 0===e&&(e=t.params.speed);const{$el:s}=t;s.find("[data-swiper-parallax], [data-swiper-parallax-x], [data-swiper-parallax-y], [data-swiper-parallax-opacity], [data-swiper-parallax-scale]").each((t=>{const s=d(t);let a=parseInt(s.attr("data-swiper-parallax-duration"),10)||e;0===e&&(a=0),s.transition(a)}))}(s)}))},function(e){let{swiper:t,extendParams:s,on:a,emit:i}=e;const n=r();s({zoom:{enabled:!1,maxRatio:3,minRatio:1,toggle:!0,containerClass:"swiper-zoom-container",zoomedSlideClass:"swiper-slide-zoomed"}}),t.zoom={enabled:!1};let l,o,c,p=1,u=!1;const m={$slideEl:void 0,slideWidth:void 0,slideHeight:void 0,$imageEl:void 0,$imageWrapEl:void 0,maxRatio:3},f={isTouched:void 0,isMoved:void 0,currentX:void 0,currentY:void 0,minX:void 0,minY:void 0,maxX:void 0,maxY:void 0,width:void 0,height:void 0,startX:void 0,startY:void 0,touchesStart:{},touchesCurrent:{}},g={x:void 0,y:void 0,prevPositionX:void 0,prevPositionY:void 0,prevTime:void 0};let v=1;function w(e){if(e.targetTouches.length<2)return 1;const t=e.targetTouches[0].pageX,s=e.targetTouches[0].pageY,a=e.targetTouches[1].pageX,i=e.targetTouches[1].pageY;return Math.sqrt((a-t)**2+(i-s)**2)}function b(e){const s=t.support,a=t.params.zoom;if(o=!1,c=!1,!s.gestures){if("touchstart"!==e.type||"touchstart"===e.type&&e.targetTouches.length<2)return;o=!0,m.scaleStart=w(e)}m.$slideEl&&m.$slideEl.length||(m.$slideEl=d(e.target).closest(`.${t.params.slideClass}`),0===m.$slideEl.length&&(m.$slideEl=t.slides.eq(t.activeIndex)),m.$imageEl=m.$slideEl.find(`.${a.containerClass}`).eq(0).find("picture, img, svg, canvas, .swiper-zoom-target").eq(0),m.$imageWrapEl=m.$imageEl.parent(`.${a.containerClass}`),m.maxRatio=m.$imageWrapEl.attr("data-swiper-zoom")||a.maxRatio,0!==m.$imageWrapEl.length)?(m.$imageEl&&m.$imageEl.transition(0),u=!0):m.$imageEl=void 0}function x(e){const s=t.support,a=t.params.zoom,i=t.zoom;if(!s.gestures){if("touchmove"!==e.type||"touchmove"===e.type&&e.targetTouches.length<2)return;c=!0,m.scaleMove=w(e)}m.$imageEl&&0!==m.$imageEl.length?(s.gestures?i.scale=e.scale*p:i.scale=m.scaleMove/m.scaleStart*p,i.scale>m.maxRatio&&(i.scale=m.maxRatio-1+(i.scale-m.maxRatio+1)**.5),i.scale<a.minRatio&&(i.scale=a.minRatio+1-(a.minRatio-i.scale+1)**.5),m.$imageEl.transform(`translate3d(0,0,0) scale(${i.scale})`)):"gesturechange"===e.type&&b(e)}function y(e){const s=t.device,a=t.support,i=t.params.zoom,r=t.zoom;if(!a.gestures){if(!o||!c)return;if("touchend"!==e.type||"touchend"===e.type&&e.changedTouches.length<2&&!s.android)return;o=!1,c=!1}m.$imageEl&&0!==m.$imageEl.length&&(r.scale=Math.max(Math.min(r.scale,m.maxRatio),i.minRatio),m.$imageEl.transition(t.params.speed).transform(`translate3d(0,0,0) scale(${r.scale})`),p=r.scale,u=!1,1===r.scale&&(m.$slideEl=void 0))}function E(e){const s=t.zoom;if(!m.$imageEl||0===m.$imageEl.length)return;if(t.allowClick=!1,!f.isTouched||!m.$slideEl)return;f.isMoved||(f.width=m.$imageEl[0].offsetWidth,f.height=m.$imageEl[0].offsetHeight,f.startX=h(m.$imageWrapEl[0],"x")||0,f.startY=h(m.$imageWrapEl[0],"y")||0,m.slideWidth=m.$slideEl[0].offsetWidth,m.slideHeight=m.$slideEl[0].offsetHeight,m.$imageWrapEl.transition(0));const a=f.width*s.scale,i=f.height*s.scale;if(!(a<m.slideWidth&&i<m.slideHeight)){if(f.minX=Math.min(m.slideWidth/2-a/2,0),f.maxX=-f.minX,f.minY=Math.min(m.slideHeight/2-i/2,0),f.maxY=-f.minY,f.touchesCurrent.x="touchmove"===e.type?e.targetTouches[0].pageX:e.pageX,f.touchesCurrent.y="touchmove"===e.type?e.targetTouches[0].pageY:e.pageY,!f.isMoved&&!u){if(t.isHorizontal()&&(Math.floor(f.minX)===Math.floor(f.startX)&&f.touchesCurrent.x<f.touchesStart.x||Math.floor(f.maxX)===Math.floor(f.startX)&&f.touchesCurrent.x>f.touchesStart.x))return void(f.isTouched=!1);if(!t.isHorizontal()&&(Math.floor(f.minY)===Math.floor(f.startY)&&f.touchesCurrent.y<f.touchesStart.y||Math.floor(f.maxY)===Math.floor(f.startY)&&f.touchesCurrent.y>f.touchesStart.y))return void(f.isTouched=!1)}e.cancelable&&e.preventDefault(),e.stopPropagation(),f.isMoved=!0,f.currentX=f.touchesCurrent.x-f.touchesStart.x+f.startX,f.currentY=f.touchesCurrent.y-f.touchesStart.y+f.startY,f.currentX<f.minX&&(f.currentX=f.minX+1-(f.minX-f.currentX+1)**.8),f.currentX>f.maxX&&(f.currentX=f.maxX-1+(f.currentX-f.maxX+1)**.8),f.currentY<f.minY&&(f.currentY=f.minY+1-(f.minY-f.currentY+1)**.8),f.currentY>f.maxY&&(f.currentY=f.maxY-1+(f.currentY-f.maxY+1)**.8),g.prevPositionX||(g.prevPositionX=f.touchesCurrent.x),g.prevPositionY||(g.prevPositionY=f.touchesCurrent.y),g.prevTime||(g.prevTime=Date.now()),g.x=(f.touchesCurrent.x-g.prevPositionX)/(Date.now()-g.prevTime)/2,g.y=(f.touchesCurrent.y-g.prevPositionY)/(Date.now()-g.prevTime)/2,Math.abs(f.touchesCurrent.x-g.prevPositionX)<2&&(g.x=0),Math.abs(f.touchesCurrent.y-g.prevPositionY)<2&&(g.y=0),g.prevPositionX=f.touchesCurrent.x,g.prevPositionY=f.touchesCurrent.y,g.prevTime=Date.now(),m.$imageWrapEl.transform(`translate3d(${f.currentX}px, ${f.currentY}px,0)`)}}function C(){const e=t.zoom;m.$slideEl&&t.previousIndex!==t.activeIndex&&(m.$imageEl&&m.$imageEl.transform("translate3d(0,0,0) scale(1)"),m.$imageWrapEl&&m.$imageWrapEl.transform("translate3d(0,0,0)"),e.scale=1,p=1,m.$slideEl=void 0,m.$imageEl=void 0,m.$imageWrapEl=void 0)}function T(e){const s=t.zoom,a=t.params.zoom;if(m.$slideEl||(e&&e.target&&(m.$slideEl=d(e.target).closest(`.${t.params.slideClass}`)),m.$slideEl||(t.params.virtual&&t.params.virtual.enabled&&t.virtual?m.$slideEl=t.$wrapperEl.children(`.${t.params.slideActiveClass}`):m.$slideEl=t.slides.eq(t.activeIndex)),m.$imageEl=m.$slideEl.find(`.${a.containerClass}`).eq(0).find("picture, img, svg, canvas, .swiper-zoom-target").eq(0),m.$imageWrapEl=m.$imageEl.parent(`.${a.containerClass}`)),!m.$imageEl||0===m.$imageEl.length||!m.$imageWrapEl||0===m.$imageWrapEl.length)return;let i,r,l,o,c,u,h,g,v,w,b,x,y,E,C,T,$,S;t.params.cssMode&&(t.wrapperEl.style.overflow="hidden",t.wrapperEl.style.touchAction="none"),m.$slideEl.addClass(`${a.zoomedSlideClass}`),void 0===f.touchesStart.x&&e?(i="touchend"===e.type?e.changedTouches[0].pageX:e.pageX,r="touchend"===e.type?e.changedTouches[0].pageY:e.pageY):(i=f.touchesStart.x,r=f.touchesStart.y),s.scale=m.$imageWrapEl.attr("data-swiper-zoom")||a.maxRatio,p=m.$imageWrapEl.attr("data-swiper-zoom")||a.maxRatio,e?($=m.$slideEl[0].offsetWidth,S=m.$slideEl[0].offsetHeight,l=m.$slideEl.offset().left+n.scrollX,o=m.$slideEl.offset().top+n.scrollY,c=l+$/2-i,u=o+S/2-r,v=m.$imageEl[0].offsetWidth,w=m.$imageEl[0].offsetHeight,b=v*s.scale,x=w*s.scale,y=Math.min($/2-b/2,0),E=Math.min(S/2-x/2,0),C=-y,T=-E,h=c*s.scale,g=u*s.scale,h<y&&(h=y),h>C&&(h=C),g<E&&(g=E),g>T&&(g=T)):(h=0,g=0),m.$imageWrapEl.transition(300).transform(`translate3d(${h}px, ${g}px,0)`),m.$imageEl.transition(300).transform(`translate3d(0,0,0) scale(${s.scale})`)}function $(){const e=t.zoom,s=t.params.zoom;m.$slideEl||(t.params.virtual&&t.params.virtual.enabled&&t.virtual?m.$slideEl=t.$wrapperEl.children(`.${t.params.slideActiveClass}`):m.$slideEl=t.slides.eq(t.activeIndex),m.$imageEl=m.$slideEl.find(`.${s.containerClass}`).eq(0).find("picture, img, svg, canvas, .swiper-zoom-target").eq(0),m.$imageWrapEl=m.$imageEl.parent(`.${s.containerClass}`)),m.$imageEl&&0!==m.$imageEl.length&&m.$imageWrapEl&&0!==m.$imageWrapEl.length&&(t.params.cssMode&&(t.wrapperEl.style.overflow="",t.wrapperEl.style.touchAction=""),e.scale=1,p=1,m.$imageWrapEl.transition(300).transform("translate3d(0,0,0)"),m.$imageEl.transition(300).transform("translate3d(0,0,0) scale(1)"),m.$slideEl.removeClass(`${s.zoomedSlideClass}`),m.$slideEl=void 0)}function S(e){const s=t.zoom;s.scale&&1!==s.scale?$():T(e)}function M(){const e=t.support;return{passiveListener:!("touchstart"!==t.touchEvents.start||!e.passiveListener||!t.params.passiveListeners)&&{passive:!0,capture:!1},activeListenerWithCapture:!e.passiveListener||{passive:!1,capture:!0}}}function P(){return`.${t.params.slideClass}`}function k(e){const{passiveListener:s}=M(),a=P();t.$wrapperEl[e]("gesturestart",a,b,s),t.$wrapperEl[e]("gesturechange",a,x,s),t.$wrapperEl[e]("gestureend",a,y,s)}function z(){l||(l=!0,k("on"))}function L(){l&&(l=!1,k("off"))}function O(){const e=t.zoom;if(e.enabled)return;e.enabled=!0;const s=t.support,{passiveListener:a,activeListenerWithCapture:i}=M(),r=P();s.gestures?(t.$wrapperEl.on(t.touchEvents.start,z,a),t.$wrapperEl.on(t.touchEvents.end,L,a)):"touchstart"===t.touchEvents.start&&(t.$wrapperEl.on(t.touchEvents.start,r,b,a),t.$wrapperEl.on(t.touchEvents.move,r,x,i),t.$wrapperEl.on(t.touchEvents.end,r,y,a),t.touchEvents.cancel&&t.$wrapperEl.on(t.touchEvents.cancel,r,y,a)),t.$wrapperEl.on(t.touchEvents.move,`.${t.params.zoom.containerClass}`,E,i)}function I(){const e=t.zoom;if(!e.enabled)return;const s=t.support;e.enabled=!1;const{passiveListener:a,activeListenerWithCapture:i}=M(),r=P();s.gestures?(t.$wrapperEl.off(t.touchEvents.start,z,a),t.$wrapperEl.off(t.touchEvents.end,L,a)):"touchstart"===t.touchEvents.start&&(t.$wrapperEl.off(t.touchEvents.start,r,b,a),t.$wrapperEl.off(t.touchEvents.move,r,x,i),t.$wrapperEl.off(t.touchEvents.end,r,y,a),t.touchEvents.cancel&&t.$wrapperEl.off(t.touchEvents.cancel,r,y,a)),t.$wrapperEl.off(t.touchEvents.move,`.${t.params.zoom.containerClass}`,E,i)}Object.defineProperty(t.zoom,"scale",{get:()=>v,set(e){if(v!==e){const t=m.$imageEl?m.$imageEl[0]:void 0,s=m.$slideEl?m.$slideEl[0]:void 0;i("zoomChange",e,t,s)}v=e}}),a("init",(()=>{t.params.zoom.enabled&&O()})),a("destroy",(()=>{I()})),a("touchStart",((e,s)=>{t.zoom.enabled&&function(e){const s=t.device;m.$imageEl&&0!==m.$imageEl.length&&(f.isTouched||(s.android&&e.cancelable&&e.preventDefault(),f.isTouched=!0,f.touchesStart.x="touchstart"===e.type?e.targetTouches[0].pageX:e.pageX,f.touchesStart.y="touchstart"===e.type?e.targetTouches[0].pageY:e.pageY))}(s)})),a("touchEnd",((e,s)=>{t.zoom.enabled&&function(){const e=t.zoom;if(!m.$imageEl||0===m.$imageEl.length)return;if(!f.isTouched||!f.isMoved)return f.isTouched=!1,void(f.isMoved=!1);f.isTouched=!1,f.isMoved=!1;let s=300,a=300;const i=g.x*s,r=f.currentX+i,n=g.y*a,l=f.currentY+n;0!==g.x&&(s=Math.abs((r-f.currentX)/g.x)),0!==g.y&&(a=Math.abs((l-f.currentY)/g.y));const o=Math.max(s,a);f.currentX=r,f.currentY=l;const d=f.width*e.scale,c=f.height*e.scale;f.minX=Math.min(m.slideWidth/2-d/2,0),f.maxX=-f.minX,f.minY=Math.min(m.slideHeight/2-c/2,0),f.maxY=-f.minY,f.currentX=Math.max(Math.min(f.currentX,f.maxX),f.minX),f.currentY=Math.max(Math.min(f.currentY,f.maxY),f.minY),m.$imageWrapEl.transition(o).transform(`translate3d(${f.currentX}px, ${f.currentY}px,0)`)}()})),a("doubleTap",((e,s)=>{!t.animating&&t.params.zoom.enabled&&t.zoom.enabled&&t.params.zoom.toggle&&S(s)})),a("transitionEnd",(()=>{t.zoom.enabled&&t.params.zoom.enabled&&C()})),a("slideChange",(()=>{t.zoom.enabled&&t.params.zoom.enabled&&t.params.cssMode&&C()})),Object.assign(t.zoom,{enable:O,disable:I,in:T,out:$,toggle:S})},function(e){let{swiper:t,extendParams:s,on:a,emit:i}=e;s({lazy:{checkInView:!1,enabled:!1,loadPrevNext:!1,loadPrevNextAmount:1,loadOnTransitionStart:!1,scrollingElement:"",elementClass:"swiper-lazy",loadingClass:"swiper-lazy-loading",loadedClass:"swiper-lazy-loaded",preloaderClass:"swiper-lazy-preloader"}}),t.lazy={};let n=!1,l=!1;function o(e,s){void 0===s&&(s=!0);const a=t.params.lazy;if(void 0===e)return;if(0===t.slides.length)return;const r=t.virtual&&t.params.virtual.enabled?t.$wrapperEl.children(`.${t.params.slideClass}[data-swiper-slide-index="${e}"]`):t.slides.eq(e),n=r.find(`.${a.elementClass}:not(.${a.loadedClass}):not(.${a.loadingClass})`);!r.hasClass(a.elementClass)||r.hasClass(a.loadedClass)||r.hasClass(a.loadingClass)||n.push(r[0]),0!==n.length&&n.each((e=>{const n=d(e);n.addClass(a.loadingClass);const l=n.attr("data-background"),c=n.attr("data-src"),p=n.attr("data-srcset"),u=n.attr("data-sizes"),h=n.parent("picture");t.loadImage(n[0],c||l,p,u,!1,(()=>{if(null!=t&&t&&(!t||t.params)&&!t.destroyed){if(l?(n.css("background-image",`url("${l}")`),n.removeAttr("data-background")):(p&&(n.attr("srcset",p),n.removeAttr("data-srcset")),u&&(n.attr("sizes",u),n.removeAttr("data-sizes")),h.length&&h.children("source").each((e=>{const t=d(e);t.attr("data-srcset")&&(t.attr("srcset",t.attr("data-srcset")),t.removeAttr("data-srcset"))})),c&&(n.attr("src",c),n.removeAttr("data-src"))),n.addClass(a.loadedClass).removeClass(a.loadingClass),r.find(`.${a.preloaderClass}`).remove(),t.params.loop&&s){const e=r.attr("data-swiper-slide-index");if(r.hasClass(t.params.slideDuplicateClass)){o(t.$wrapperEl.children(`[data-swiper-slide-index="${e}"]:not(.${t.params.slideDuplicateClass})`).index(),!1)}else{o(t.$wrapperEl.children(`.${t.params.slideDuplicateClass}[data-swiper-slide-index="${e}"]`).index(),!1)}}i("lazyImageReady",r[0],n[0]),t.params.autoHeight&&t.updateAutoHeight()}})),i("lazyImageLoad",r[0],n[0])}))}function c(){const{$wrapperEl:e,params:s,slides:a,activeIndex:i}=t,r=t.virtual&&s.virtual.enabled,n=s.lazy;let c=s.slidesPerView;function p(t){if(r){if(e.children(`.${s.slideClass}[data-swiper-slide-index="${t}"]`).length)return!0}else if(a[t])return!0;return!1}function u(e){return r?d(e).attr("data-swiper-slide-index"):d(e).index()}if("auto"===c&&(c=0),l||(l=!0),t.params.watchSlidesProgress)e.children(`.${s.slideVisibleClass}`).each((e=>{o(r?d(e).attr("data-swiper-slide-index"):d(e).index())}));else if(c>1)for(let e=i;e<i+c;e+=1)p(e)&&o(e);else o(i);if(n.loadPrevNext)if(c>1||n.loadPrevNextAmount&&n.loadPrevNextAmount>1){const e=n.loadPrevNextAmount,t=Math.ceil(c),s=Math.min(i+t+Math.max(e,t),a.length),r=Math.max(i-Math.max(t,e),0);for(let e=i+t;e<s;e+=1)p(e)&&o(e);for(let e=r;e<i;e+=1)p(e)&&o(e)}else{const t=e.children(`.${s.slideNextClass}`);t.length>0&&o(u(t));const a=e.children(`.${s.slidePrevClass}`);a.length>0&&o(u(a))}}function p(){const e=r();if(!t||t.destroyed)return;const s=t.params.lazy.scrollingElement?d(t.params.lazy.scrollingElement):d(e),a=s[0]===e,i=a?e.innerWidth:s[0].offsetWidth,l=a?e.innerHeight:s[0].offsetHeight,o=t.$el.offset(),{rtlTranslate:u}=t;let h=!1;u&&(o.left-=t.$el[0].scrollLeft);const m=[[o.left,o.top],[o.left+t.width,o.top],[o.left,o.top+t.height],[o.left+t.width,o.top+t.height]];for(let e=0;e<m.length;e+=1){const t=m[e];if(t[0]>=0&&t[0]<=i&&t[1]>=0&&t[1]<=l){if(0===t[0]&&0===t[1])continue;h=!0}}const f=!("touchstart"!==t.touchEvents.start||!t.support.passiveListener||!t.params.passiveListeners)&&{passive:!0,capture:!1};h?(c(),s.off("scroll",p,f)):n||(n=!0,s.on("scroll",p,f))}a("beforeInit",(()=>{t.params.lazy.enabled&&t.params.preloadImages&&(t.params.preloadImages=!1)})),a("init",(()=>{t.params.lazy.enabled&&(t.params.lazy.checkInView?p():c())})),a("scroll",(()=>{t.params.freeMode&&t.params.freeMode.enabled&&!t.params.freeMode.sticky&&c()})),a("scrollbarDragMove resize _freeModeNoMomentumRelease",(()=>{t.params.lazy.enabled&&(t.params.lazy.checkInView?p():c())})),a("transitionStart",(()=>{t.params.lazy.enabled&&(t.params.lazy.loadOnTransitionStart||!t.params.lazy.loadOnTransitionStart&&!l)&&(t.params.lazy.checkInView?p():c())})),a("transitionEnd",(()=>{t.params.lazy.enabled&&!t.params.lazy.loadOnTransitionStart&&(t.params.lazy.checkInView?p():c())})),a("slideChange",(()=>{const{lazy:e,cssMode:s,watchSlidesProgress:a,touchReleaseOnEdges:i,resistanceRatio:r}=t.params;e.enabled&&(s||a&&(i||0===r))&&c()})),a("destroy",(()=>{t.$el&&t.$el.find(`.${t.params.lazy.loadingClass}`).removeClass(t.params.lazy.loadingClass)})),Object.assign(t.lazy,{load:c,loadInSlide:o})},function(e){let{swiper:t,extendParams:s,on:a}=e;function i(e,t){const s=function(){let e,t,s;return(a,i)=>{for(t=-1,e=a.length;e-t>1;)s=e+t>>1,a[s]<=i?t=s:e=s;return e}}();let a,i;return this.x=e,this.y=t,this.lastIndex=e.length-1,this.interpolate=function(e){return e?(i=s(this.x,e),a=i-1,(e-this.x[a])*(this.y[i]-this.y[a])/(this.x[i]-this.x[a])+this.y[a]):0},this}function r(){t.controller.control&&t.controller.spline&&(t.controller.spline=void 0,delete t.controller.spline)}s({controller:{control:void 0,inverse:!1,by:"slide"}}),t.controller={control:void 0},a("beforeInit",(()=>{t.controller.control=t.params.controller.control})),a("update",(()=>{r()})),a("resize",(()=>{r()})),a("observerUpdate",(()=>{r()})),a("setTranslate",((e,s,a)=>{t.controller.control&&t.controller.setTranslate(s,a)})),a("setTransition",((e,s,a)=>{t.controller.control&&t.controller.setTransition(s,a)})),Object.assign(t.controller,{setTranslate:function(e,s){const a=t.controller.control;let r,n;const l=t.constructor;function o(e){const s=t.rtlTranslate?-t.translate:t.translate;"slide"===t.params.controller.by&&(!function(e){t.controller.spline||(t.controller.spline=t.params.loop?new i(t.slidesGrid,e.slidesGrid):new i(t.snapGrid,e.snapGrid))}(e),n=-t.controller.spline.interpolate(-s)),n&&"container"!==t.params.controller.by||(r=(e.maxTranslate()-e.minTranslate())/(t.maxTranslate()-t.minTranslate()),n=(s-t.minTranslate())*r+e.minTranslate()),t.params.controller.inverse&&(n=e.maxTranslate()-n),e.updateProgress(n),e.setTranslate(n,t),e.updateActiveIndex(),e.updateSlidesClasses()}if(Array.isArray(a))for(let e=0;e<a.length;e+=1)a[e]!==s&&a[e]instanceof l&&o(a[e]);else a instanceof l&&s!==a&&o(a)},setTransition:function(e,s){const a=t.constructor,i=t.controller.control;let r;function n(s){s.setTransition(e,t),0!==e&&(s.transitionStart(),s.params.autoHeight&&p((()=>{s.updateAutoHeight()})),s.$wrapperEl.transitionEnd((()=>{i&&(s.params.loop&&"slide"===t.params.controller.by&&s.loopFix(),s.transitionEnd())})))}if(Array.isArray(i))for(r=0;r<i.length;r+=1)i[r]!==s&&i[r]instanceof a&&n(i[r]);else i instanceof a&&s!==i&&n(i)}})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({a11y:{enabled:!0,notificationClass:"swiper-notification",prevSlideMessage:"Previous slide",nextSlideMessage:"Next slide",firstSlideMessage:"This is the first slide",lastSlideMessage:"This is the last slide",paginationBulletMessage:"Go to slide {{index}}",slideLabelMessage:"{{index}} / {{slidesLength}}",containerMessage:null,containerRoleDescriptionMessage:null,itemRoleDescriptionMessage:null,slideRole:"group",id:null}});let i=null;function r(e){const t=i;0!==t.length&&(t.html(""),t.html(e))}function n(e){e.attr("tabIndex","0")}function l(e){e.attr("tabIndex","-1")}function o(e,t){e.attr("role",t)}function c(e,t){e.attr("aria-roledescription",t)}function p(e,t){e.attr("aria-label",t)}function u(e){e.attr("aria-disabled",!0)}function h(e){e.attr("aria-disabled",!1)}function m(e){if(13!==e.keyCode&&32!==e.keyCode)return;const s=t.params.a11y,a=d(e.target);t.navigation&&t.navigation.$nextEl&&a.is(t.navigation.$nextEl)&&(t.isEnd&&!t.params.loop||t.slideNext(),t.isEnd?r(s.lastSlideMessage):r(s.nextSlideMessage)),t.navigation&&t.navigation.$prevEl&&a.is(t.navigation.$prevEl)&&(t.isBeginning&&!t.params.loop||t.slidePrev(),t.isBeginning?r(s.firstSlideMessage):r(s.prevSlideMessage)),t.pagination&&a.is(U(t.params.pagination.bulletClass))&&a[0].click()}function f(){return t.pagination&&t.pagination.bullets&&t.pagination.bullets.length}function g(){return f()&&t.params.pagination.clickable}const v=(e,t,s)=>{n(e),"BUTTON"!==e[0].tagName&&(o(e,"button"),e.on("keydown",m)),p(e,s),function(e,t){e.attr("aria-controls",t)}(e,t)},w=e=>{const s=e.target.closest(`.${t.params.slideClass}`);if(!s||!t.slides.includes(s))return;const a=t.slides.indexOf(s)===t.activeIndex,i=t.params.watchSlidesProgress&&t.visibleSlides&&t.visibleSlides.includes(s);a||i||t.slideTo(t.slides.indexOf(s),0)},b=()=>{const e=t.params.a11y;e.itemRoleDescriptionMessage&&c(d(t.slides),e.itemRoleDescriptionMessage),o(d(t.slides),e.slideRole);const s=t.params.loop?t.slides.filter((e=>!e.classList.contains(t.params.slideDuplicateClass))).length:t.slides.length;e.slideLabelMessage&&t.slides.each(((a,i)=>{const r=d(a),n=t.params.loop?parseInt(r.attr("data-swiper-slide-index"),10):i;p(r,e.slideLabelMessage.replace(/\{\{index\}\}/,n+1).replace(/\{\{slidesLength\}\}/,s))}))},x=()=>{const e=t.params.a11y;t.$el.append(i);const s=t.$el;e.containerRoleDescriptionMessage&&c(s,e.containerRoleDescriptionMessage),e.containerMessage&&p(s,e.containerMessage);const a=t.$wrapperEl,r=e.id||a.attr("id")||`swiper-wrapper-${n=16,void 0===n&&(n=16),"x".repeat(n).replace(/x/g,(()=>Math.round(16*Math.random()).toString(16)))}`;var n;const l=t.params.autoplay&&t.params.autoplay.enabled?"off":"polite";var o;let d,u;o=r,a.attr("id",o),function(e,t){e.attr("aria-live",t)}(a,l),b(),t.navigation&&t.navigation.$nextEl&&(d=t.navigation.$nextEl),t.navigation&&t.navigation.$prevEl&&(u=t.navigation.$prevEl),d&&d.length&&v(d,r,e.nextSlideMessage),u&&u.length&&v(u,r,e.prevSlideMessage),g()&&t.pagination.$el.on("keydown",U(t.params.pagination.bulletClass),m),t.$el.on("focus",w,!0)};a("beforeInit",(()=>{i=d(`<span class="${t.params.a11y.notificationClass}" aria-live="assertive" aria-atomic="true"></span>`)})),a("afterInit",(()=>{t.params.a11y.enabled&&x()})),a("slidesLengthChange snapGridLengthChange slidesGridLengthChange",(()=>{t.params.a11y.enabled&&b()})),a("fromEdge toEdge afterInit lock unlock",(()=>{t.params.a11y.enabled&&function(){if(t.params.loop||t.params.rewind||!t.navigation)return;const{$nextEl:e,$prevEl:s}=t.navigation;s&&s.length>0&&(t.isBeginning?(u(s),l(s)):(h(s),n(s))),e&&e.length>0&&(t.isEnd?(u(e),l(e)):(h(e),n(e)))}()})),a("paginationUpdate",(()=>{t.params.a11y.enabled&&function(){const e=t.params.a11y;f()&&t.pagination.bullets.each((s=>{const a=d(s);t.params.pagination.clickable&&(n(a),t.params.pagination.renderBullet||(o(a,"button"),p(a,e.paginationBulletMessage.replace(/\{\{index\}\}/,a.index()+1)))),a.is(`.${t.params.pagination.bulletActiveClass}`)?a.attr("aria-current","true"):a.removeAttr("aria-current")}))}()})),a("destroy",(()=>{t.params.a11y.enabled&&function(){let e,s;i&&i.length>0&&i.remove(),t.navigation&&t.navigation.$nextEl&&(e=t.navigation.$nextEl),t.navigation&&t.navigation.$prevEl&&(s=t.navigation.$prevEl),e&&e.off("keydown",m),s&&s.off("keydown",m),g()&&t.pagination.$el.off("keydown",U(t.params.pagination.bulletClass),m),t.$el.off("focus",w,!0)}()}))},function(e){let{swiper:t,extendParams:s,on:a}=e;s({history:{enabled:!1,root:"",replaceState:!1,key:"slides",keepQuery:!1}});let i=!1,n={};const l=e=>e.toString().replace(/\s+/g,"-").replace(/[^\w-]+/g,"").replace(/--+/g,"-").replace(/^-+/,"").replace(/-+$/,""),o=e=>{const t=r();let s;s=e?new URL(e):t.location;const a=s.pathname.slice(1).split("/").filter((e=>""!==e)),i=a.length;return{key:a[i-2],value:a[i-1]}},d=(e,s)=>{const a=r();if(!i||!t.params.history.enabled)return;let n;n=t.params.url?new URL(t.params.url):a.location;const o=t.slides.eq(s);let d=l(o.attr("data-history"));if(t.params.history.root.length>0){let s=t.params.history.root;"/"===s[s.length-1]&&(s=s.slice(0,s.length-1)),d=`${s}/${e}/${d}`}else n.pathname.includes(e)||(d=`${e}/${d}`);t.params.history.keepQuery&&(d+=n.search);const c=a.history.state;c&&c.value===d||(t.params.history.replaceState?a.history.replaceState({value:d},null,d):a.history.pushState({value:d},null,d))},c=(e,s,a)=>{if(s)for(let i=0,r=t.slides.length;i<r;i+=1){const r=t.slides.eq(i);if(l(r.attr("data-history"))===s&&!r.hasClass(t.params.slideDuplicateClass)){const s=r.index();t.slideTo(s,e,a)}}else t.slideTo(0,e,a)},p=()=>{n=o(t.params.url),c(t.params.speed,n.value,!1)};a("init",(()=>{t.params.history.enabled&&(()=>{const e=r();if(t.params.history){if(!e.history||!e.history.pushState)return t.params.history.enabled=!1,void(t.params.hashNavigation.enabled=!0);i=!0,n=o(t.params.url),(n.key||n.value)&&(c(0,n.value,t.params.runCallbacksOnInit),t.params.history.replaceState||e.addEventListener("popstate",p))}})()})),a("destroy",(()=>{t.params.history.enabled&&(()=>{const e=r();t.params.history.replaceState||e.removeEventListener("popstate",p)})()})),a("transitionEnd _freeModeNoMomentumRelease",(()=>{i&&d(t.params.history.key,t.activeIndex)})),a("slideChange",(()=>{i&&t.params.cssMode&&d(t.params.history.key,t.activeIndex)}))},function(e){let{swiper:t,extendParams:s,emit:i,on:n}=e,l=!1;const o=a(),c=r();s({hashNavigation:{enabled:!1,replaceState:!1,watchState:!1}});const p=()=>{i("hashChange");const e=o.location.hash.replace("#","");if(e!==t.slides.eq(t.activeIndex).attr("data-hash")){const s=t.$wrapperEl.children(`.${t.params.slideClass}[data-hash="${e}"]`).index();if(void 0===s)return;t.slideTo(s)}},u=()=>{if(l&&t.params.hashNavigation.enabled)if(t.params.hashNavigation.replaceState&&c.history&&c.history.replaceState)c.history.replaceState(null,null,`#${t.slides.eq(t.activeIndex).attr("data-hash")}`||""),i("hashSet");else{const e=t.slides.eq(t.activeIndex),s=e.attr("data-hash")||e.attr("data-history");o.location.hash=s||"",i("hashSet")}};n("init",(()=>{t.params.hashNavigation.enabled&&(()=>{if(!t.params.hashNavigation.enabled||t.params.history&&t.params.history.enabled)return;l=!0;const e=o.location.hash.replace("#","");if(e){const s=0;for(let a=0,i=t.slides.length;a<i;a+=1){const i=t.slides.eq(a);if((i.attr("data-hash")||i.attr("data-history"))===e&&!i.hasClass(t.params.slideDuplicateClass)){const e=i.index();t.slideTo(e,s,t.params.runCallbacksOnInit,!0)}}}t.params.hashNavigation.watchState&&d(c).on("hashchange",p)})()})),n("destroy",(()=>{t.params.hashNavigation.enabled&&t.params.hashNavigation.watchState&&d(c).off("hashchange",p)})),n("transitionEnd _freeModeNoMomentumRelease",(()=>{l&&u()})),n("slideChange",(()=>{l&&t.params.cssMode&&u()}))},function(e){let t,{swiper:s,extendParams:i,on:r,emit:n}=e;function l(){const e=s.slides.eq(s.activeIndex);let a=s.params.autoplay.delay;e.attr("data-swiper-autoplay")&&(a=e.attr("data-swiper-autoplay")||s.params.autoplay.delay),clearTimeout(t),t=p((()=>{let e;s.params.autoplay.reverseDirection?s.params.loop?(s.loopFix(),e=s.slidePrev(s.params.speed,!0,!0),n("autoplay")):s.isBeginning?s.params.autoplay.stopOnLastSlide?d():(e=s.slideTo(s.slides.length-1,s.params.speed,!0,!0),n("autoplay")):(e=s.slidePrev(s.params.speed,!0,!0),n("autoplay")):s.params.loop?(s.loopFix(),e=s.slideNext(s.params.speed,!0,!0),n("autoplay")):s.isEnd?s.params.autoplay.stopOnLastSlide?d():(e=s.slideTo(0,s.params.speed,!0,!0),n("autoplay")):(e=s.slideNext(s.params.speed,!0,!0),n("autoplay")),(s.params.cssMode&&s.autoplay.running||!1===e)&&l()}),a)}function o(){return void 0===t&&(!s.autoplay.running&&(s.autoplay.running=!0,n("autoplayStart"),l(),!0))}function d(){return!!s.autoplay.running&&(void 0!==t&&(t&&(clearTimeout(t),t=void 0),s.autoplay.running=!1,n("autoplayStop"),!0))}function c(e){s.autoplay.running&&(s.autoplay.paused||(t&&clearTimeout(t),s.autoplay.paused=!0,0!==e&&s.params.autoplay.waitForTransition?["transitionend","webkitTransitionEnd"].forEach((e=>{s.$wrapperEl[0].addEventListener(e,h)})):(s.autoplay.paused=!1,l())))}function u(){const e=a();"hidden"===e.visibilityState&&s.autoplay.running&&c(),"visible"===e.visibilityState&&s.autoplay.paused&&(l(),s.autoplay.paused=!1)}function h(e){s&&!s.destroyed&&s.$wrapperEl&&e.target===s.$wrapperEl[0]&&(["transitionend","webkitTransitionEnd"].forEach((e=>{s.$wrapperEl[0].removeEventListener(e,h)})),s.autoplay.paused=!1,s.autoplay.running?l():d())}function m(){s.params.autoplay.disableOnInteraction?d():(n("autoplayPause"),c()),["transitionend","webkitTransitionEnd"].forEach((e=>{s.$wrapperEl[0].removeEventListener(e,h)}))}function f(){s.params.autoplay.disableOnInteraction||(s.autoplay.paused=!1,n("autoplayResume"),l())}s.autoplay={running:!1,paused:!1},i({autoplay:{enabled:!1,delay:3e3,waitForTransition:!0,disableOnInteraction:!0,stopOnLastSlide:!1,reverseDirection:!1,pauseOnMouseEnter:!1}}),r("init",(()=>{if(s.params.autoplay.enabled){o();a().addEventListener("visibilitychange",u),s.params.autoplay.pauseOnMouseEnter&&(s.$el.on("mouseenter",m),s.$el.on("mouseleave",f))}})),r("beforeTransitionStart",((e,t,a)=>{s.autoplay.running&&(a||!s.params.autoplay.disableOnInteraction?s.autoplay.pause(t):d())})),r("sliderFirstMove",(()=>{s.autoplay.running&&(s.params.autoplay.disableOnInteraction?d():c())})),r("touchEnd",(()=>{s.params.cssMode&&s.autoplay.paused&&!s.params.autoplay.disableOnInteraction&&l()})),r("destroy",(()=>{s.$el.off("mouseenter",m),s.$el.off("mouseleave",f),s.autoplay.running&&d();a().removeEventListener("visibilitychange",u)})),Object.assign(s.autoplay,{pause:c,run:l,start:o,stop:d})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({thumbs:{swiper:null,multipleActiveThumbs:!0,autoScrollOffset:0,slideThumbActiveClass:"swiper-slide-thumb-active",thumbsContainerClass:"swiper-thumbs"}});let i=!1,r=!1;function n(){const e=t.thumbs.swiper;if(!e||e.destroyed)return;const s=e.clickedIndex,a=e.clickedSlide;if(a&&d(a).hasClass(t.params.thumbs.slideThumbActiveClass))return;if(null==s)return;let i;if(i=e.params.loop?parseInt(d(e.clickedSlide).attr("data-swiper-slide-index"),10):s,t.params.loop){let e=t.activeIndex;t.slides.eq(e).hasClass(t.params.slideDuplicateClass)&&(t.loopFix(),t._clientLeft=t.$wrapperEl[0].clientLeft,e=t.activeIndex);const s=t.slides.eq(e).prevAll(`[data-swiper-slide-index="${i}"]`).eq(0).index(),a=t.slides.eq(e).nextAll(`[data-swiper-slide-index="${i}"]`).eq(0).index();i=void 0===s?a:void 0===a?s:a-e<e-s?a:s}t.slideTo(i)}function l(){const{thumbs:e}=t.params;if(i)return!1;i=!0;const s=t.constructor;if(e.swiper instanceof s)t.thumbs.swiper=e.swiper,Object.assign(t.thumbs.swiper.originalParams,{watchSlidesProgress:!0,slideToClickedSlide:!1}),Object.assign(t.thumbs.swiper.params,{watchSlidesProgress:!0,slideToClickedSlide:!1});else if(m(e.swiper)){const a=Object.assign({},e.swiper);Object.assign(a,{watchSlidesProgress:!0,slideToClickedSlide:!1}),t.thumbs.swiper=new s(a),r=!0}return t.thumbs.swiper.$el.addClass(t.params.thumbs.thumbsContainerClass),t.thumbs.swiper.on("tap",n),!0}function o(e){const s=t.thumbs.swiper;if(!s||s.destroyed)return;const a="auto"===s.params.slidesPerView?s.slidesPerViewDynamic():s.params.slidesPerView,i=t.params.thumbs.autoScrollOffset,r=i&&!s.params.loop;if(t.realIndex!==s.realIndex||r){let n,l,o=s.activeIndex;if(s.params.loop){s.slides.eq(o).hasClass(s.params.slideDuplicateClass)&&(s.loopFix(),s._clientLeft=s.$wrapperEl[0].clientLeft,o=s.activeIndex);const e=s.slides.eq(o).prevAll(`[data-swiper-slide-index="${t.realIndex}"]`).eq(0).index(),a=s.slides.eq(o).nextAll(`[data-swiper-slide-index="${t.realIndex}"]`).eq(0).index();n=void 0===e?a:void 0===a?e:a-o==o-e?s.params.slidesPerGroup>1?a:o:a-o<o-e?a:e,l=t.activeIndex>t.previousIndex?"next":"prev"}else n=t.realIndex,l=n>t.previousIndex?"next":"prev";r&&(n+="next"===l?i:-1*i),s.visibleSlidesIndexes&&s.visibleSlidesIndexes.indexOf(n)<0&&(s.params.centeredSlides?n=n>o?n-Math.floor(a/2)+1:n+Math.floor(a/2)-1:n>o&&s.params.slidesPerGroup,s.slideTo(n,e?0:void 0))}let n=1;const l=t.params.thumbs.slideThumbActiveClass;if(t.params.slidesPerView>1&&!t.params.centeredSlides&&(n=t.params.slidesPerView),t.params.thumbs.multipleActiveThumbs||(n=1),n=Math.floor(n),s.slides.removeClass(l),s.params.loop||s.params.virtual&&s.params.virtual.enabled)for(let e=0;e<n;e+=1)s.$wrapperEl.children(`[data-swiper-slide-index="${t.realIndex+e}"]`).addClass(l);else for(let e=0;e<n;e+=1)s.slides.eq(t.realIndex+e).addClass(l)}t.thumbs={swiper:null},a("beforeInit",(()=>{const{thumbs:e}=t.params;e&&e.swiper&&(l(),o(!0))})),a("slideChange update resize observerUpdate",(()=>{o()})),a("setTransition",((e,s)=>{const a=t.thumbs.swiper;a&&!a.destroyed&&a.setTransition(s)})),a("beforeDestroy",(()=>{const e=t.thumbs.swiper;e&&!e.destroyed&&r&&e.destroy()})),Object.assign(t.thumbs,{init:l,update:o})},function(e){let{swiper:t,extendParams:s,emit:a,once:i}=e;s({freeMode:{enabled:!1,momentum:!0,momentumRatio:1,momentumBounce:!0,momentumBounceRatio:1,momentumVelocityRatio:1,sticky:!1,minimumVelocity:.02}}),Object.assign(t,{freeMode:{onTouchStart:function(){const e=t.getTranslate();t.setTranslate(e),t.setTransition(0),t.touchEventsData.velocities.length=0,t.freeMode.onTouchEnd({currentPos:t.rtl?t.translate:-t.translate})},onTouchMove:function(){const{touchEventsData:e,touches:s}=t;0===e.velocities.length&&e.velocities.push({position:s[t.isHorizontal()?"startX":"startY"],time:e.touchStartTime}),e.velocities.push({position:s[t.isHorizontal()?"currentX":"currentY"],time:u()})},onTouchEnd:function(e){let{currentPos:s}=e;const{params:r,$wrapperEl:n,rtlTranslate:l,snapGrid:o,touchEventsData:d}=t,c=u()-d.touchStartTime;if(s<-t.minTranslate())t.slideTo(t.activeIndex);else if(s>-t.maxTranslate())t.slides.length<o.length?t.slideTo(o.length-1):t.slideTo(t.slides.length-1);else{if(r.freeMode.momentum){if(d.velocities.length>1){const e=d.velocities.pop(),s=d.velocities.pop(),a=e.position-s.position,i=e.time-s.time;t.velocity=a/i,t.velocity/=2,Math.abs(t.velocity)<r.freeMode.minimumVelocity&&(t.velocity=0),(i>150||u()-e.time>300)&&(t.velocity=0)}else t.velocity=0;t.velocity*=r.freeMode.momentumVelocityRatio,d.velocities.length=0;let e=1e3*r.freeMode.momentumRatio;const s=t.velocity*e;let c=t.translate+s;l&&(c=-c);let p,h=!1;const m=20*Math.abs(t.velocity)*r.freeMode.momentumBounceRatio;let f;if(c<t.maxTranslate())r.freeMode.momentumBounce?(c+t.maxTranslate()<-m&&(c=t.maxTranslate()-m),p=t.maxTranslate(),h=!0,d.allowMomentumBounce=!0):c=t.maxTranslate(),r.loop&&r.centeredSlides&&(f=!0);else if(c>t.minTranslate())r.freeMode.momentumBounce?(c-t.minTranslate()>m&&(c=t.minTranslate()+m),p=t.minTranslate(),h=!0,d.allowMomentumBounce=!0):c=t.minTranslate(),r.loop&&r.centeredSlides&&(f=!0);else if(r.freeMode.sticky){let e;for(let t=0;t<o.length;t+=1)if(o[t]>-c){e=t;break}c=Math.abs(o[e]-c)<Math.abs(o[e-1]-c)||"next"===t.swipeDirection?o[e]:o[e-1],c=-c}if(f&&i("transitionEnd",(()=>{t.loopFix()})),0!==t.velocity){if(e=l?Math.abs((-c-t.translate)/t.velocity):Math.abs((c-t.translate)/t.velocity),r.freeMode.sticky){const s=Math.abs((l?-c:c)-t.translate),a=t.slidesSizesGrid[t.activeIndex];e=s<a?r.speed:s<2*a?1.5*r.speed:2.5*r.speed}}else if(r.freeMode.sticky)return void t.slideToClosest();r.freeMode.momentumBounce&&h?(t.updateProgress(p),t.setTransition(e),t.setTranslate(c),t.transitionStart(!0,t.swipeDirection),t.animating=!0,n.transitionEnd((()=>{t&&!t.destroyed&&d.allowMomentumBounce&&(a("momentumBounce"),t.setTransition(r.speed),setTimeout((()=>{t.setTranslate(p),n.transitionEnd((()=>{t&&!t.destroyed&&t.transitionEnd()}))}),0))}))):t.velocity?(a("_freeModeNoMomentumRelease"),t.updateProgress(c),t.setTransition(e),t.setTranslate(c),t.transitionStart(!0,t.swipeDirection),t.animating||(t.animating=!0,n.transitionEnd((()=>{t&&!t.destroyed&&t.transitionEnd()})))):t.updateProgress(c),t.updateActiveIndex(),t.updateSlidesClasses()}else{if(r.freeMode.sticky)return void t.slideToClosest();r.freeMode&&a("_freeModeNoMomentumRelease")}(!r.freeMode.momentum||c>=r.longSwipesMs)&&(t.updateProgress(),t.updateActiveIndex(),t.updateSlidesClasses())}}}})},function(e){let t,s,a,{swiper:i,extendParams:r}=e;r({grid:{rows:1,fill:"column"}}),i.grid={initSlides:e=>{const{slidesPerView:r}=i.params,{rows:n,fill:l}=i.params.grid;s=t/n,a=Math.floor(e/n),t=Math.floor(e/n)===e/n?e:Math.ceil(e/n)*n,"auto"!==r&&"row"===l&&(t=Math.max(t,r*n))},updateSlide:(e,r,n,l)=>{const{slidesPerGroup:o,spaceBetween:d}=i.params,{rows:c,fill:p}=i.params.grid;let u,h,m;if("row"===p&&o>1){const s=Math.floor(e/(o*c)),a=e-c*o*s,i=0===s?o:Math.min(Math.ceil((n-s*c*o)/c),o);m=Math.floor(a/i),h=a-m*i+s*o,u=h+m*t/c,r.css({"-webkit-order":u,order:u})}else"column"===p?(h=Math.floor(e/c),m=e-h*c,(h>a||h===a&&m===c-1)&&(m+=1,m>=c&&(m=0,h+=1))):(m=Math.floor(e/s),h=e-m*s);r.css(l("margin-top"),0!==m?d&&`${d}px`:"")},updateWrapperSize:(e,s,a)=>{const{spaceBetween:r,centeredSlides:n,roundLengths:l}=i.params,{rows:o}=i.params.grid;if(i.virtualSize=(e+r)*t,i.virtualSize=Math.ceil(i.virtualSize/o)-r,i.$wrapperEl.css({[a("width")]:`${i.virtualSize+r}px`}),n){s.splice(0,s.length);const e=[];for(let t=0;t<s.length;t+=1){let a=s[t];l&&(a=Math.floor(a)),s[t]<i.virtualSize+s[0]&&e.push(a)}s.push(...e)}}}},function(e){let{swiper:t}=e;Object.assign(t,{appendSlide:K.bind(t),prependSlide:Z.bind(t),addSlide:Q.bind(t),removeSlide:J.bind(t),removeAllSlides:ee.bind(t)})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({fadeEffect:{crossFade:!1,transformEl:null}}),te({effect:"fade",swiper:t,on:a,setTranslate:()=>{const{slides:e}=t,s=t.params.fadeEffect;for(let a=0;a<e.length;a+=1){const e=t.slides.eq(a);let i=-e[0].swiperSlideOffset;t.params.virtualTranslate||(i-=t.translate);let r=0;t.isHorizontal()||(r=i,i=0);const n=t.params.fadeEffect.crossFade?Math.max(1-Math.abs(e[0].progress),0):1+Math.min(Math.max(e[0].progress,-1),0);se(s,e).css({opacity:n}).transform(`translate3d(${i}px, ${r}px, 0px)`)}},setTransition:e=>{const{transformEl:s}=t.params.fadeEffect;(s?t.slides.find(s):t.slides).transition(e),ae({swiper:t,duration:e,transformEl:s,allSlides:!0})},overwriteParams:()=>({slidesPerView:1,slidesPerGroup:1,watchSlidesProgress:!0,spaceBetween:0,virtualTranslate:!t.params.cssMode})})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({cubeEffect:{slideShadows:!0,shadow:!0,shadowOffset:20,shadowScale:.94}});const i=(e,t,s)=>{let a=s?e.find(".swiper-slide-shadow-left"):e.find(".swiper-slide-shadow-top"),i=s?e.find(".swiper-slide-shadow-right"):e.find(".swiper-slide-shadow-bottom");0===a.length&&(a=d(`<div class="swiper-slide-shadow-${s?"left":"top"}"></div>`),e.append(a)),0===i.length&&(i=d(`<div class="swiper-slide-shadow-${s?"right":"bottom"}"></div>`),e.append(i)),a.length&&(a[0].style.opacity=Math.max(-t,0)),i.length&&(i[0].style.opacity=Math.max(t,0))};te({effect:"cube",swiper:t,on:a,setTranslate:()=>{const{$el:e,$wrapperEl:s,slides:a,width:r,height:n,rtlTranslate:l,size:o,browser:c}=t,p=t.params.cubeEffect,u=t.isHorizontal(),h=t.virtual&&t.params.virtual.enabled;let m,f=0;p.shadow&&(u?(m=s.find(".swiper-cube-shadow"),0===m.length&&(m=d('<div class="swiper-cube-shadow"></div>'),s.append(m)),m.css({height:`${r}px`})):(m=e.find(".swiper-cube-shadow"),0===m.length&&(m=d('<div class="swiper-cube-shadow"></div>'),e.append(m))));for(let e=0;e<a.length;e+=1){const t=a.eq(e);let s=e;h&&(s=parseInt(t.attr("data-swiper-slide-index"),10));let r=90*s,n=Math.floor(r/360);l&&(r=-r,n=Math.floor(-r/360));const d=Math.max(Math.min(t[0].progress,1),-1);let c=0,m=0,g=0;s%4==0?(c=4*-n*o,g=0):(s-1)%4==0?(c=0,g=4*-n*o):(s-2)%4==0?(c=o+4*n*o,g=o):(s-3)%4==0&&(c=-o,g=3*o+4*o*n),l&&(c=-c),u||(m=c,c=0);const v=`rotateX(${u?0:-r}deg) rotateY(${u?r:0}deg) translate3d(${c}px, ${m}px, ${g}px)`;d<=1&&d>-1&&(f=90*s+90*d,l&&(f=90*-s-90*d)),t.transform(v),p.slideShadows&&i(t,d,u)}if(s.css({"-webkit-transform-origin":`50% 50% -${o/2}px`,"transform-origin":`50% 50% -${o/2}px`}),p.shadow)if(u)m.transform(`translate3d(0px, ${r/2+p.shadowOffset}px, ${-r/2}px) rotateX(90deg) rotateZ(0deg) scale(${p.shadowScale})`);else{const e=Math.abs(f)-90*Math.floor(Math.abs(f)/90),t=1.5-(Math.sin(2*e*Math.PI/360)/2+Math.cos(2*e*Math.PI/360)/2),s=p.shadowScale,a=p.shadowScale/t,i=p.shadowOffset;m.transform(`scale3d(${s}, 1, ${a}) translate3d(0px, ${n/2+i}px, ${-n/2/a}px) rotateX(-90deg)`)}const g=c.isSafari||c.isWebView?-o/2:0;s.transform(`translate3d(0px,0,${g}px) rotateX(${t.isHorizontal()?0:f}deg) rotateY(${t.isHorizontal()?-f:0}deg)`),s[0].style.setProperty("--swiper-cube-translate-z",`${g}px`)},setTransition:e=>{const{$el:s,slides:a}=t;a.transition(e).find(".swiper-slide-shadow-top, .swiper-slide-shadow-right, .swiper-slide-shadow-bottom, .swiper-slide-shadow-left").transition(e),t.params.cubeEffect.shadow&&!t.isHorizontal()&&s.find(".swiper-cube-shadow").transition(e)},recreateShadows:()=>{const e=t.isHorizontal();t.slides.each((t=>{const s=Math.max(Math.min(t.progress,1),-1);i(d(t),s,e)}))},getEffectParams:()=>t.params.cubeEffect,perspective:()=>!0,overwriteParams:()=>({slidesPerView:1,slidesPerGroup:1,watchSlidesProgress:!0,resistanceRatio:0,spaceBetween:0,centeredSlides:!1,virtualTranslate:!0})})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({flipEffect:{slideShadows:!0,limitRotation:!0,transformEl:null}});const i=(e,s,a)=>{let i=t.isHorizontal()?e.find(".swiper-slide-shadow-left"):e.find(".swiper-slide-shadow-top"),r=t.isHorizontal()?e.find(".swiper-slide-shadow-right"):e.find(".swiper-slide-shadow-bottom");0===i.length&&(i=ie(a,e,t.isHorizontal()?"left":"top")),0===r.length&&(r=ie(a,e,t.isHorizontal()?"right":"bottom")),i.length&&(i[0].style.opacity=Math.max(-s,0)),r.length&&(r[0].style.opacity=Math.max(s,0))};te({effect:"flip",swiper:t,on:a,setTranslate:()=>{const{slides:e,rtlTranslate:s}=t,a=t.params.flipEffect;for(let r=0;r<e.length;r+=1){const n=e.eq(r);let l=n[0].progress;t.params.flipEffect.limitRotation&&(l=Math.max(Math.min(n[0].progress,1),-1));const o=n[0].swiperSlideOffset;let d=-180*l,c=0,p=t.params.cssMode?-o-t.translate:-o,u=0;t.isHorizontal()?s&&(d=-d):(u=p,p=0,c=-d,d=0),n[0].style.zIndex=-Math.abs(Math.round(l))+e.length,a.slideShadows&&i(n,l,a);const h=`translate3d(${p}px, ${u}px, 0px) rotateX(${c}deg) rotateY(${d}deg)`;se(a,n).transform(h)}},setTransition:e=>{const{transformEl:s}=t.params.flipEffect;(s?t.slides.find(s):t.slides).transition(e).find(".swiper-slide-shadow-top, .swiper-slide-shadow-right, .swiper-slide-shadow-bottom, .swiper-slide-shadow-left").transition(e),ae({swiper:t,duration:e,transformEl:s})},recreateShadows:()=>{const e=t.params.flipEffect;t.slides.each((s=>{const a=d(s);let r=a[0].progress;t.params.flipEffect.limitRotation&&(r=Math.max(Math.min(s.progress,1),-1)),i(a,r,e)}))},getEffectParams:()=>t.params.flipEffect,perspective:()=>!0,overwriteParams:()=>({slidesPerView:1,slidesPerGroup:1,watchSlidesProgress:!0,spaceBetween:0,virtualTranslate:!t.params.cssMode})})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({coverflowEffect:{rotate:50,stretch:0,depth:100,scale:1,modifier:1,slideShadows:!0,transformEl:null}}),te({effect:"coverflow",swiper:t,on:a,setTranslate:()=>{const{width:e,height:s,slides:a,slidesSizesGrid:i}=t,r=t.params.coverflowEffect,n=t.isHorizontal(),l=t.translate,o=n?e/2-l:s/2-l,d=n?r.rotate:-r.rotate,c=r.depth;for(let e=0,t=a.length;e<t;e+=1){const t=a.eq(e),s=i[e],l=(o-t[0].swiperSlideOffset-s/2)/s,p="function"==typeof r.modifier?r.modifier(l):l*r.modifier;let u=n?d*p:0,h=n?0:d*p,m=-c*Math.abs(p),f=r.stretch;"string"==typeof f&&-1!==f.indexOf("%")&&(f=parseFloat(r.stretch)/100*s);let g=n?0:f*p,v=n?f*p:0,w=1-(1-r.scale)*Math.abs(p);Math.abs(v)<.001&&(v=0),Math.abs(g)<.001&&(g=0),Math.abs(m)<.001&&(m=0),Math.abs(u)<.001&&(u=0),Math.abs(h)<.001&&(h=0),Math.abs(w)<.001&&(w=0);const b=`translate3d(${v}px,${g}px,${m}px)  rotateX(${h}deg) rotateY(${u}deg) scale(${w})`;if(se(r,t).transform(b),t[0].style.zIndex=1-Math.abs(Math.round(p)),r.slideShadows){let e=n?t.find(".swiper-slide-shadow-left"):t.find(".swiper-slide-shadow-top"),s=n?t.find(".swiper-slide-shadow-right"):t.find(".swiper-slide-shadow-bottom");0===e.length&&(e=ie(r,t,n?"left":"top")),0===s.length&&(s=ie(r,t,n?"right":"bottom")),e.length&&(e[0].style.opacity=p>0?p:0),s.length&&(s[0].style.opacity=-p>0?-p:0)}}},setTransition:e=>{const{transformEl:s}=t.params.coverflowEffect;(s?t.slides.find(s):t.slides).transition(e).find(".swiper-slide-shadow-top, .swiper-slide-shadow-right, .swiper-slide-shadow-bottom, .swiper-slide-shadow-left").transition(e)},perspective:()=>!0,overwriteParams:()=>({watchSlidesProgress:!0})})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({creativeEffect:{transformEl:null,limitProgress:1,shadowPerProgress:!1,progressMultiplier:1,perspective:!0,prev:{translate:[0,0,0],rotate:[0,0,0],opacity:1,scale:1},next:{translate:[0,0,0],rotate:[0,0,0],opacity:1,scale:1}}});const i=e=>"string"==typeof e?e:`${e}px`;te({effect:"creative",swiper:t,on:a,setTranslate:()=>{const{slides:e,$wrapperEl:s,slidesSizesGrid:a}=t,r=t.params.creativeEffect,{progressMultiplier:n}=r,l=t.params.centeredSlides;if(l){const e=a[0]/2-t.params.slidesOffsetBefore||0;s.transform(`translateX(calc(50% - ${e}px))`)}for(let s=0;s<e.length;s+=1){const a=e.eq(s),o=a[0].progress,d=Math.min(Math.max(a[0].progress,-r.limitProgress),r.limitProgress);let c=d;l||(c=Math.min(Math.max(a[0].originalProgress,-r.limitProgress),r.limitProgress));const p=a[0].swiperSlideOffset,u=[t.params.cssMode?-p-t.translate:-p,0,0],h=[0,0,0];let m=!1;t.isHorizontal()||(u[1]=u[0],u[0]=0);let f={translate:[0,0,0],rotate:[0,0,0],scale:1,opacity:1};d<0?(f=r.next,m=!0):d>0&&(f=r.prev,m=!0),u.forEach(((e,t)=>{u[t]=`calc(${e}px + (${i(f.translate[t])} * ${Math.abs(d*n)}))`})),h.forEach(((e,t)=>{h[t]=f.rotate[t]*Math.abs(d*n)})),a[0].style.zIndex=-Math.abs(Math.round(o))+e.length;const g=u.join(", "),v=`rotateX(${h[0]}deg) rotateY(${h[1]}deg) rotateZ(${h[2]}deg)`,w=c<0?`scale(${1+(1-f.scale)*c*n})`:`scale(${1-(1-f.scale)*c*n})`,b=c<0?1+(1-f.opacity)*c*n:1-(1-f.opacity)*c*n,x=`translate3d(${g}) ${v} ${w}`;if(m&&f.shadow||!m){let e=a.children(".swiper-slide-shadow");if(0===e.length&&f.shadow&&(e=ie(r,a)),e.length){const t=r.shadowPerProgress?d*(1/r.limitProgress):d;e[0].style.opacity=Math.min(Math.max(Math.abs(t),0),1)}}const y=se(r,a);y.transform(x).css({opacity:b}),f.origin&&y.css("transform-origin",f.origin)}},setTransition:e=>{const{transformEl:s}=t.params.creativeEffect;(s?t.slides.find(s):t.slides).transition(e).find(".swiper-slide-shadow").transition(e),ae({swiper:t,duration:e,transformEl:s,allSlides:!0})},perspective:()=>t.params.creativeEffect.perspective,overwriteParams:()=>({watchSlidesProgress:!0,virtualTranslate:!t.params.cssMode})})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({cardsEffect:{slideShadows:!0,transformEl:null,rotate:!0}}),te({effect:"cards",swiper:t,on:a,setTranslate:()=>{const{slides:e,activeIndex:s}=t,a=t.params.cardsEffect,{startTranslate:i,isTouched:r}=t.touchEventsData,n=t.translate;for(let l=0;l<e.length;l+=1){const o=e.eq(l),d=o[0].progress,c=Math.min(Math.max(d,-4),4);let p=o[0].swiperSlideOffset;t.params.centeredSlides&&!t.params.cssMode&&t.$wrapperEl.transform(`translateX(${t.minTranslate()}px)`),t.params.centeredSlides&&t.params.cssMode&&(p-=e[0].swiperSlideOffset);let u=t.params.cssMode?-p-t.translate:-p,h=0;const m=-100*Math.abs(c);let f=1,g=-2*c,v=8-.75*Math.abs(c);const w=t.virtual&&t.params.virtual.enabled?t.virtual.from+l:l,b=(w===s||w===s-1)&&c>0&&c<1&&(r||t.params.cssMode)&&n<i,x=(w===s||w===s+1)&&c<0&&c>-1&&(r||t.params.cssMode)&&n>i;if(b||x){const e=(1-Math.abs((Math.abs(c)-.5)/.5))**.5;g+=-28*c*e,f+=-.5*e,v+=96*e,h=-25*e*Math.abs(c)+"%"}if(u=c<0?`calc(${u}px + (${v*Math.abs(c)}%))`:c>0?`calc(${u}px + (-${v*Math.abs(c)}%))`:`${u}px`,!t.isHorizontal()){const e=h;h=u,u=e}const y=c<0?""+(1+(1-f)*c):""+(1-(1-f)*c),E=`\n        translate3d(${u}, ${h}, ${m}px)\n        rotateZ(${a.rotate?g:0}deg)\n        scale(${y})\n      `;if(a.slideShadows){let e=o.find(".swiper-slide-shadow");0===e.length&&(e=ie(a,o)),e.length&&(e[0].style.opacity=Math.min(Math.max((Math.abs(c)-.5)/.5,0),1))}o[0].style.zIndex=-Math.abs(Math.round(d))+e.length;se(a,o).transform(E)}},setTransition:e=>{const{transformEl:s}=t.params.cardsEffect;(s?t.slides.find(s):t.slides).transition(e).find(".swiper-slide-shadow").transition(e),ae({swiper:t,duration:e,transformEl:s})},perspective:()=>!0,overwriteParams:()=>({watchSlidesProgress:!0,virtualTranslate:!t.params.cssMode})})}];return V.use(re),V}));
  //# sourceMappingURL=swiper-bundle.min.js.map
      </script>
      <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no, shrink-to-fit=no" />
      </head>
  <body>

      <div id="mainContainer">

          <div class="swiper mySwiper">
              <div class="swiper-wrapper">
                  <div class="swiper-slide graphSlide">
                      <div class="chartLabels">
                          <div class="chartLabel">
                              <div class="labelTickBox tick0" onclick="toggleGraph(0)"></div>
                              <input class="graphName name0" placeholder="Graf 1" maxlength="5" onfocus="toggleKeys()" onblur="toggleKeys()">
                          </div>
                          <div class="chartLabel">
                              <div class="labelTickBox tick1" onclick="toggleGraph(1)"></div>
                              <input class="graphName name1" placeholder="Graf 2" maxlength="5" onfocus="toggleKeys()" onblur="toggleKeys()">
                          </div>
                          <div class="chartLabel">
                              <div class="labelTickBox tick2" onclick="toggleGraph(2)"></div>
                              <input class="graphName name2" placeholder="Graf 3" maxlength="5" onfocus="toggleKeys()" onblur="toggleKeys()">
                          </div>
                      </div>
                      <div class="chartContainer">
                          <canvas id="chart"></canvas>
                      </div>
                  </div>
                  <div class="swiper-slide logoSlide">
                    <svg id="logoImg" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 197.84 197.84" style="enable-background:new 0 0 197.84 197.84;" xml:space="preserve">
                    <style type="text/css">
                    	.st0{fill:#FFFFFF;}
                    	.st1{fill:#0A2237;}
                    	.st2{fill:#0F73BE;}
                    	.st3{fill:#F1F1F1;}
                    	.st4{fill:#231F20;}
                    	.st5{fill:#F1F2F2;}
                    </style>
                    <g id="Layer_2">
                    </g>
                    <g id="Layer_1">
                    	<g>
                    		<path class="st2" d="M163.28,144.38c-7.69-4.38-15.14-8.62-22.77-12.96c0,17.46,0,34.67,0,52.04c-0.37-0.17-0.62-0.26-0.84-0.38
                    			c-14.48-8.33-28.97-16.66-43.44-25.02c-0.73-0.42-1.27-0.37-1.97,0.03c-21.79,12.67-43.58,25.33-65.38,37.99
                    			c-0.32,0.19-0.66,0.35-1.15,0.6c-0.03-0.47-0.07-0.82-0.07-1.17c-0.07-28.79-0.13-57.58-0.2-86.36
                    			c-0.02-6.68-0.03-13.37-0.06-20.05c-0.03-7.2-0.05-14.39-0.13-21.59c-0.01-0.9,0.24-1.4,1.04-1.86
                    			c6.99-3.98,13.95-8.03,20.94-12.02c0.78-0.44,1.1-0.92,1.09-1.84c-0.07-6.2-0.08-12.41-0.11-18.61
                    			c-0.06-10.38-0.11-20.77-0.17-31.15c0-0.24,0.03-0.47,0.05-0.87c0.38,0.18,0.68,0.3,0.95,0.46c23.5,13.47,47,26.94,70.5,40.41
                    			c13.4,7.68,26.79,15.37,40.21,23.02c1.01,0.58,1.41,1.2,1.41,2.4c0,25.15,0.04,50.31,0.08,75.46
                    			C163.28,143.31,163.28,143.71,163.28,144.38z M44.43,120.22c0,0,0.01,0,0.01,0c0,11.93,0,23.86,0,35.78
                    			c0,0.62,0.05,1.15-0.76,1.45c-2.78,1.04-4.09,3.12-4.01,6.12c0.09,3.36,3.17,5.86,6.81,5.52c3.14-0.29,5.75-3.67,5.12-6.76
                    			c-0.18-0.91,0.08-1.32,0.85-1.76c5.81-3.3,11.58-6.65,17.37-9.98c6.71-3.86,13.41-7.73,20.13-11.57c0.3-0.17,0.94-0.23,1.13-0.04
                    			c2.16,2.12,6.2,2.12,8.35,0c0.17-0.17,0.66-0.22,0.87-0.1c4.49,2.56,8.97,5.14,13.44,7.76c0.23,0.13,0.37,0.57,0.4,0.87
                    			c0.08,0.98-0.09,2.01,0.14,2.95c0.69,2.77,3.36,4.62,6.15,4.44c2.94-0.19,5.16-2.33,5.66-5.44c0.4-2.5-1.31-5.24-3.9-6.22
                    			c-0.59-0.22-0.96-0.43-0.96-1.2c0.03-14.46,0.02-28.93,0.01-43.39c0-0.57,0.18-0.82,0.71-1.05c0.77-0.34,1.54-0.76,2.19-1.29
                    			c0.5-0.4,0.83-0.4,1.35-0.1c4.24,2.46,8.48,4.9,12.74,7.32c0.63,0.36,0.85,0.72,0.7,1.47c-0.82,4.22,3.28,7.95,7.47,6.82
                    			c2.46-0.66,4.33-2.83,4.47-5.19c0.18-2.88-1.17-5.2-3.75-6.21c-0.76-0.3-1.04-0.66-1.03-1.49c0.03-4.83,0.02-9.67-0.01-14.5
                    			c0-0.74,0.17-1.15,0.94-1.44c2.3-0.9,3.66-2.62,3.84-5.11c0.2-2.62-0.91-4.61-3.23-5.82c-2.33-1.22-4.59-0.91-6.61,0.72
                    			c-0.64,0.52-1.04,0.48-1.69,0.1c-7.76-4.5-15.54-8.98-23.31-13.46c-4.72-2.72-9.43-5.45-14.16-8.16
                    			c-0.58-0.33-0.84-0.63-0.67-1.37c0.16-0.71,0.14-1.52-0.02-2.23c-1-4.57-6.16-6.35-9.81-3.42c-0.38,0.31-0.66,0.61-1.24,0.27
                    			c-4.44-2.59-8.9-5.13-13.34-7.72c-0.25-0.15-0.4-0.62-0.42-0.96c-0.05-0.82,0.13-1.66-0.01-2.45c-0.5-2.81-3.08-4.88-5.93-4.88
                    			c-3.01,0.01-5.45,2.16-6,5.3c-0.45,2.54,1.24,5.4,3.85,6.34c0.78,0.28,1.02,0.65,1.01,1.47c-0.03,6.58-0.03,13.16,0,19.74
                    			c0,0.79-0.24,1.22-0.93,1.61c-5.66,3.22-11.3,6.46-16.92,9.75c-0.85,0.5-1.39,0.53-2.22-0.12c-1.95-1.52-4.17-1.7-6.36-0.54
                    			c-2.36,1.24-3.42,3.28-3.2,5.94c0.2,2.37,1.49,4.04,3.65,4.92c0.91,0.37,1.12,0.84,1.11,1.74
                    			C44.42,96.5,44.43,108.36,44.43,120.22z"/>
                    		<path class="st2" d="M46.84,120.2c0-11.89,0.01-23.78-0.02-35.67c0-0.83,0.21-1.25,1.04-1.57c2.74-1.04,4.22-3.72,3.72-6.56
                    			c-0.11-0.64-0.03-1.02,0.62-1.39c12.54-7.18,25.06-14.4,37.57-21.62c0.69-0.4,1.16-0.48,1.77,0.14c0.42,0.42,1.01,0.72,1.58,0.91
                    			c0.66,0.22,0.9,0.56,0.9,1.26c-0.03,4.93-0.02,9.87,0,14.8c0,0.68-0.21,1.01-0.88,1.27c-2.87,1.12-4.26,3.75-3.79,6.85
                    			c0.05,0.33-0.2,0.89-0.48,1.06c-4.46,2.62-8.95,5.18-13.42,7.78c-0.58,0.34-0.86,0-1.24-0.29c-3.11-2.34-7.38-1.41-9.13,1.98
                    			c-1.65,3.2-0.16,7.1,3.26,8.36c0.74,0.27,0.97,0.61,0.96,1.39c-0.04,4.8-0.04,9.59,0,14.39c0,0.74-0.22,1.07-0.93,1.32
                    			c-2.86,1.01-4.24,3.83-3.93,6.19c0.42,3.2,2.75,5.39,5.82,5.48c3.31,0.1,6.8-2.57,6.11-7.24c-0.09-0.59,0.03-0.86,0.52-1.14
                    			c4.37-2.49,8.74-5,13.09-7.52c0.47-0.27,0.79-0.31,1.27,0.06c0.64,0.5,1.42,0.81,2.09,1.27c0.28,0.2,0.62,0.58,0.62,0.88
                    			c0.04,5.11,0.04,10.21,0,15.32c0,0.32-0.37,0.8-0.68,0.93c-3.04,1.32-4.45,3.74-3.9,6.97c0.13,0.78-0.37,0.95-0.83,1.21
                    			c-4.09,2.36-8.19,4.72-12.28,7.08c-8.4,4.84-16.8,9.67-25.18,14.53c-0.62,0.36-1.04,0.42-1.6-0.12c-0.46-0.44-1.06-0.82-1.66-0.98
                    			c-0.91-0.24-1.02-0.76-1.02-1.57C46.85,144.05,46.84,132.12,46.84,120.2z"/>
                    		<path class="st2" d="M114.08,91.79c-0.02,2.67,1.4,4.77,3.94,5.75c0.66,0.25,0.85,0.58,0.85,1.27c-0.02,14.36-0.02,28.72,0,43.08
                    			c0,0.7-0.14,1.12-0.88,1.37c-0.66,0.23-1.33,0.6-1.84,1.08c-0.53,0.49-0.88,0.4-1.42,0.09c-4.23-2.47-8.47-4.92-12.73-7.34
                    			c-0.69-0.39-0.91-0.77-0.76-1.62c0.5-2.71-1.11-5.43-3.78-6.47c-0.7-0.27-0.93-0.61-0.93-1.34c0.03-4.9,0.03-9.8,0-14.7
                    			c0-0.71,0.2-1.08,0.91-1.36c2.43-0.94,3.88-3.11,3.87-5.64c-0.01-2.46-1.47-4.64-3.85-5.55c-0.71-0.27-0.91-0.63-0.91-1.35
                    			c0.03-4.9,0.03-9.8,0-14.7c0-0.7,0.17-1.09,0.89-1.36c2.38-0.9,3.85-3.08,3.87-5.53c0.02-2.49-1.4-4.68-3.76-5.61
                    			c-0.76-0.3-1.03-0.66-1.02-1.49c0.04-4.83,0.03-9.66,0.01-14.5c0-0.75,0.15-1.21,0.95-1.44c0.54-0.16,1.11-0.46,1.5-0.86
                    			c0.63-0.66,1.14-0.56,1.86-0.14c12.45,7.2,24.91,14.39,37.37,21.56c0.56,0.32,0.88,0.63,0.74,1.37c-0.52,2.78,0.95,5.55,3.58,6.55
                    			c0.88,0.34,1.16,0.81,1.16,1.64c0,3.05,0.02,6.1,0.03,9.15c0.01,1.82-0.01,3.63,0.02,5.45c0.01,0.59-0.16,0.91-0.74,1.15
                    			c-0.75,0.31-1.48,0.71-2.12,1.21c-0.48,0.37-0.79,0.34-1.26,0.07c-4.33-2.5-8.66-5-13.01-7.46c-0.61-0.34-0.68-0.74-0.58-1.33
                    			c0.52-3.22-1.62-6.18-4.92-6.84c-3.02-0.6-6.25,1.53-6.92,4.59C114.11,90.96,114.12,91.42,114.08,91.79z"/>
                    		<path class="st2" d="M94,91.7c0,2.5-0.01,5,0.01,7.5c0,0.59-0.18,0.89-0.77,1.13c-2.95,1.16-4.35,3.75-3.89,6.89
                    			c0.05,0.32-0.21,0.87-0.5,1.04c-4.4,2.58-8.82,5.11-13.26,7.62c-0.25,0.14-0.74,0.04-1.03-0.1c-0.76-0.38-1.5-0.81-2.2-1.29
                    			c-0.28-0.19-0.62-0.56-0.63-0.85c-0.04-5.03-0.04-10.07,0-15.1c0-0.3,0.32-0.74,0.6-0.87c3.33-1.48,4.51-3.64,4-7.3
                    			c-0.04-0.29,0.24-0.77,0.51-0.93c4.43-2.59,8.88-5.15,13.34-7.69c0.24-0.13,0.69-0.06,0.97,0.08c0.54,0.28,0.99,0.84,1.55,0.97
                    			c1.23,0.29,1.34,1.06,1.31,2.12C93.96,87.18,94,89.44,94,91.7z"/>
                    		<path class="st2" d="M71.7,60.55c0-0.47,0-0.8,0-1.13c0-5.93,0.01-11.86-0.02-17.78c0-0.78,0.14-1.26,0.97-1.51
                    			c0.6-0.18,1.19-0.55,1.66-0.98c0.52-0.47,0.89-0.51,1.51-0.15c4.26,2.49,8.53,4.94,12.82,7.38c0.61,0.35,0.91,0.67,0.71,1.46
                    			c-0.16,0.64-0.13,1.38,0,2.03c0.13,0.63-0.02,0.93-0.56,1.23c-5.5,3.07-10.99,6.16-16.49,9.23C72.19,60.4,72.05,60.43,71.7,60.55z
                    			"/>
                    		<path class="st2" d="M74.05,34.57c-0.01,2.05-1.6,3.61-3.65,3.59c-1.96-0.02-3.59-1.64-3.61-3.59c-0.02-1.95,1.68-3.65,3.66-3.66
                    			C72.46,30.9,74.06,32.53,74.05,34.57z"/>
                    		<path class="st2" d="M74.06,91.93c-0.01,1.99-1.59,3.59-3.55,3.6c-1.98,0.01-3.7-1.67-3.71-3.62c-0.01-1.97,1.67-3.63,3.68-3.63
                    			C72.52,88.28,74.07,89.86,74.06,91.93z"/>
                    		<path class="st2" d="M95.27,52.42c-2.06-0.01-3.63-1.6-3.6-3.66c0.03-1.98,1.62-3.51,3.65-3.5c2.07,0.01,3.63,1.59,3.6,3.66
                    			C98.89,50.89,97.29,52.43,95.27,52.42z"/>
                    		<path class="st2" d="M95.25,138.16c-2.06-0.02-3.62-1.61-3.58-3.68c0.03-1.98,1.65-3.51,3.67-3.49c2.06,0.02,3.61,1.62,3.58,3.68
                    			C98.88,136.65,97.28,138.18,95.25,138.16z"/>
                    		<path class="st2" d="M45.58,80.97c-2.07-0.02-3.55-1.58-3.51-3.69c0.03-1.97,1.69-3.6,3.62-3.55c1.96,0.04,3.71,1.82,3.65,3.71
                    			C49.27,79.45,47.63,80.99,45.58,80.97z"/>
                    		<path class="st2" d="M45.59,166.72c-2.06-0.02-3.55-1.59-3.52-3.69c0.03-1.95,1.69-3.59,3.62-3.56c1.93,0.03,3.71,1.84,3.65,3.72
                    			C49.27,165.19,47.64,166.74,45.59,166.72z"/>
                    		<path class="st2" d="M144.82,80.97c-1.99-0.02-3.59-1.63-3.59-3.6c0-1.95,1.78-3.69,3.72-3.64c2.02,0.05,3.57,1.7,3.53,3.78
                    			C148.46,79.5,146.89,80.99,144.82,80.97z"/>
                    		<path class="st2" d="M74.06,120.31c-0.02,1.97-1.64,3.6-3.58,3.59c-1.94,0-3.71-1.77-3.69-3.67c0.03-2.04,1.71-3.62,3.81-3.58
                    			C72.6,116.69,74.08,118.26,74.06,120.31z"/>
                    		<path class="st2" d="M116.51,91.88c0-2.03,1.54-3.59,3.55-3.6c2.01-0.01,3.72,1.66,3.72,3.62c0,1.95-1.76,3.65-3.74,3.63
                    			C118.07,95.51,116.5,93.9,116.51,91.88z"/>
                    		<path class="st2" d="M116.51,148.88c-0.01-2.03,1.52-3.61,3.52-3.63c2.02-0.02,3.72,1.61,3.75,3.59c0.02,1.93-1.74,3.67-3.71,3.66
                    			C118.1,152.49,116.51,150.88,116.51,148.88z"/>
                    		<path class="st2" d="M144.86,109.56c-2-0.01-3.61-1.6-3.62-3.56c-0.01-1.99,1.66-3.63,3.69-3.61c2.09,0.02,3.6,1.57,3.57,3.67
                    			C148.47,108.08,146.92,109.57,144.86,109.56z"/>
                    		<path class="st2" d="M95.25,109.56c-2.06-0.01-3.61-1.6-3.58-3.67c0.03-1.97,1.65-3.52,3.67-3.5c2.02,0.02,3.59,1.59,3.59,3.58
                    			C98.92,108.02,97.33,109.57,95.25,109.56z"/>
                    		<path class="st2" d="M95.3,80.97c-2.07,0-3.65-1.57-3.63-3.63c0.01-1.95,1.66-3.59,3.62-3.6c1.95-0.01,3.62,1.64,3.63,3.59
                    			C98.94,79.38,97.36,80.96,95.3,80.97z"/>
                    	</g>
                    </g>
                    </svg>

                  </div>
              </div>
          </div>

          <div class="outerButtonContainer">
              <div class="buttonContainerAction">
                  <div class="btn actionBtn Digit1">
                      <svg class="material-symbols-rounded toggleBtn0 toggle Digit1" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="Digit1" d="M23.95 44.05Q23.35 44.05 22.8 43.9Q22.25 43.75 21.8 43.35Q14.55 37.15 10.85 31.325Q7.15 25.5 7.15 20.4Q7.15 12.55 12.25 7.85Q17.35 3.15 24 3.15Q31.4 3.15 36 7.775Q40.6 12.4 41 19.9L44.3 16.55Q44.85 16 45.575 16Q46.3 16 46.85 16.55Q47.4 17.15 47.4 17.85Q47.4 18.55 46.85 19.1L40.25 25.7Q39.9 26.05 39.475 26.225Q39.05 26.4 38.6 26.4Q38.15 26.4 37.725 26.225Q37.3 26.05 36.95 25.7L30.35 19.1Q29.8 18.55 29.8 17.85Q29.8 17.15 30.4 16.55Q30.9 16 31.6 16Q32.3 16 32.9 16.55L36.45 20.1Q36.15 14.85 32.875 11.35Q29.6 7.85 24 7.85Q18.95 7.85 15.4 11.4Q11.85 14.95 11.85 20.4Q11.85 24.25 14.75 28.925Q17.65 33.6 24 38.9Q24.65 38.25 25.55 37.375Q26.45 36.5 27.15 35.8Q26.9 35.25 26.775 34.675Q26.65 34.1 26.65 33.65Q26.65 31.4 28.225 29.85Q29.8 28.3 32 28.3Q34.25 28.3 35.8 29.85Q37.35 31.4 37.35 33.65Q37.35 35.9 35.8 37.45Q34.25 39 32 39Q31.7 39 31.425 38.975Q31.15 38.95 30.75 38.85Q29.6 39.95 28.525 41.025Q27.45 42.1 26.15 43.25Q25.7 43.65 25.125 43.85Q24.55 44.05 23.95 44.05Z"/></svg>
                  </div>
                  <div class="btn actionBtn Digit2">
                      <svg class="material-symbols-rounded toggleBtn1 toggle Digit2" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="Digit2" d="M24 45.25Q19.6 45.25 15.725 43.6Q11.85 41.95 8.95 39.05Q6.05 36.15 4.4 32.3Q2.75 28.45 2.75 24Q2.75 19.55 4.4 15.675Q6.05 11.8 8.95 8.925Q11.85 6.05 15.7 4.375Q19.55 2.7 24 2.7Q28.45 2.7 32.325 4.375Q36.2 6.05 39.075 8.925Q41.95 11.8 43.625 15.675Q45.3 19.55 45.3 24Q45.3 28.45 43.625 32.3Q41.95 36.15 39.075 39.025Q36.2 41.9 32.325 43.575Q28.45 45.25 24 45.25ZM24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24ZM24 40.55Q30.95 40.55 35.75 35.725Q40.55 30.9 40.55 24Q40.55 17.05 35.75 12.25Q30.95 7.45 24.05 7.45Q17.1 7.45 12.275 12.25Q7.45 17.05 7.45 23.95Q7.45 30.9 12.275 35.725Q17.1 40.55 24 40.55Z"/></svg>
                  </div>
                  <div class="btn actionBtn Digit3">
                      <svg class="material-symbols-rounded toggleBtn2 toggle Digit3" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="Digit3" d="M9.45 43.25Q7.5 43.25 6.125 41.875Q4.75 40.5 4.75 38.55V9.45Q4.75 7.5 6.125 6.1Q7.5 4.7 9.45 4.7H38.55Q40.5 4.7 41.9 6.1Q43.3 7.5 43.3 9.45V38.55Q43.3 40.5 41.9 41.875Q40.5 43.25 38.55 43.25ZM9.45 38.55H38.55Q38.55 38.55 38.55 38.55Q38.55 38.55 38.55 38.55V9.45Q38.55 9.45 38.55 9.45Q38.55 9.45 38.55 9.45H9.45Q9.45 9.45 9.45 9.45Q9.45 9.45 9.45 9.45V38.55Q9.45 38.55 9.45 38.55Q9.45 38.55 9.45 38.55Z"/><svg>
                  </div>
              </div>
              <div class="buttonContainerDrive">
                  <div class="btn driveBtn KeyQ">
                      <svg class="material-symbols-rounded arrow KeyQ" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="KeyQ" d="M36.25 39.55 13.85 17.15V28.3Q13.85 29.3 13.175 29.975Q12.5 30.65 11.5 30.65Q10.5 30.65 9.825 29.975Q9.15 29.3 9.15 28.3V11.5Q9.15 10.5 9.825 9.825Q10.5 9.15 11.5 9.15H28.3Q29.3 9.15 29.975 9.825Q30.65 10.5 30.65 11.5Q30.65 12.5 29.975 13.175Q29.3 13.85 28.3 13.85H17.15L39.55 36.25Q40.25 36.95 40.25 37.9Q40.25 38.85 39.55 39.55Q38.85 40.25 37.9 40.25Q36.95 40.25 36.25 39.55Z"/></svg>
                  </div>
                  <div class="btn driveBtn KeyW">
                      <svg class="material-symbols-rounded arrow KeyW" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="KeyW" d="M24 40.55Q23 40.55 22.325 39.875Q21.65 39.2 21.65 38.2V16.45L12.45 25.7Q11.75 26.4 10.8 26.4Q9.85 26.4 9.15 25.7Q8.4 25 8.4 24Q8.4 23 9.15 22.3L22.35 9.1Q22.65 8.7 23.1 8.525Q23.55 8.35 24.05 8.35Q24.45 8.35 24.875 8.525Q25.3 8.7 25.65 9.1L38.9 22.3Q39.6 23 39.6 24Q39.6 25 38.9 25.7Q38.15 26.4 37.225 26.4Q36.3 26.4 35.6 25.7L26.35 16.45V38.2Q26.35 39.2 25.675 39.875Q25 40.55 24 40.55Z"/></svg>
                  </div>
                  <div class="btn driveBtn KeyE">
                      <svg class="material-symbols-rounded arrow KeyE" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path  class="KeyE" d="M8.45 39.55Q7.75 38.85 7.75 37.9Q7.75 36.95 8.45 36.25L30.85 13.85H19.7Q18.7 13.85 18.025 13.175Q17.35 12.5 17.35 11.5Q17.35 10.5 18.025 9.825Q18.7 9.15 19.7 9.15H36.5Q37.5 9.15 38.175 9.825Q38.85 10.5 38.85 11.5V28.3Q38.85 29.3 38.175 29.975Q37.5 30.65 36.5 30.65Q35.5 30.65 34.825 29.975Q34.15 29.3 34.15 28.3V17.15L11.8 39.55Q11.1 40.25 10.125 40.25Q9.15 40.25 8.45 39.55Z"/></svg>
                  </div>
              </div>
              <div class="buttonContainerDrive">
                  <div class="btn driveBtn KeyA">
                      <svg class="material-symbols-rounded arrow KeyA" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path  class="KeyA" d="M21.4 38.85 8.15 25.65Q7.8 25.3 7.625 24.875Q7.45 24.45 7.45 24Q7.45 23.55 7.625 23.125Q7.8 22.7 8.15 22.35L21.45 9.05Q22.15 8.35 23.1 8.375Q24.05 8.4 24.75 9.1Q25.45 9.85 25.45 10.8Q25.45 11.75 24.75 12.45L15.6 21.65H37.3Q38.3 21.65 38.975 22.325Q39.65 23 39.65 24Q39.65 25 38.975 25.675Q38.3 26.35 37.3 26.35H15.6L24.8 35.6Q25.5 36.3 25.475 37.225Q25.45 38.15 24.75 38.85Q24 39.6 23.05 39.6Q22.1 39.6 21.4 38.85Z"/></svg>
                  </div>
                  <div class="btn driveBtn KeyS">
                      <svg class="material-symbols-rounded arrow KeyS" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path  class="KeyS" d="M24 39.6Q23.55 39.6 23.125 39.425Q22.7 39.25 22.35 38.9L9.15 25.7Q8.4 25 8.4 24.025Q8.4 23.05 9.15 22.35Q9.85 21.65 10.8 21.65Q11.75 21.65 12.45 22.35L21.65 31.5V9.8Q21.65 8.8 22.325 8.125Q23 7.45 24 7.45Q25 7.45 25.675 8.125Q26.35 8.8 26.35 9.8V31.5L35.55 22.35Q36.25 21.65 37.2 21.65Q38.15 21.65 38.9 22.35Q39.6 23.05 39.6 24.025Q39.6 25 38.9 25.7L25.65 38.9Q25.3 39.25 24.875 39.425Q24.45 39.6 24 39.6Z"></svg>
                  </div>
                  <div class="btn driveBtn KeyD">
                      <svg class="material-symbols-rounded arrow KeyD" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path  class="KeyD" d="M22.35 38.8Q21.65 38.15 21.65 37.175Q21.65 36.2 22.35 35.5L31.5 26.35H9.8Q8.8 26.35 8.125 25.675Q7.45 25 7.45 24Q7.45 23 8.125 22.325Q8.8 21.65 9.8 21.65H31.5L22.35 12.45Q21.65 11.8 21.65 10.8Q21.65 9.8 22.35 9.1Q23.05 8.45 24.025 8.45Q25 8.45 25.7 9.1L38.95 22.35Q39.3 22.7 39.475 23.125Q39.65 23.55 39.65 24Q39.65 24.45 39.475 24.875Q39.3 25.3 38.95 25.65L25.7 38.9Q25 39.6 24.025 39.55Q23.05 39.5 22.35 38.8Z"/></svg>
                  </div>
              </div>
              <div class="logoLandscape">
                <svg id="logoLandscapeImg" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 1115.85 196.31" style="enable-background:new 0 0 1115.85 196.31;" xml:space="preserve">
                <style type="text/css">
                	.st0{fill:#FFFFFF;}
                	.st1{fill:#0A2237;}
                	.st2{fill:#0F73BE;}
                	.st3{fill:#F1F1F1;}
                	.st4{fill:#231F20;}
                	.st5{fill:#F1F2F2;}
                </style>
                <g id="Layer_2">
                </g>
                <g id="Layer_1">
                	<g>
                		<path class="st2" d="M135.63,143.75c-7.69-4.38-15.14-8.62-22.77-12.96c0,17.46,0,34.67,0,52.04c-0.37-0.17-0.62-0.26-0.84-0.38
                			c-14.48-8.33-28.97-16.66-43.44-25.02c-0.73-0.42-1.27-0.37-1.97,0.03c-21.79,12.67-43.58,25.33-65.38,37.99
                			c-0.32,0.19-0.66,0.35-1.15,0.6c-0.03-0.47-0.07-0.82-0.07-1.17c-0.07-28.79-0.13-57.58-0.2-86.36
                			c-0.02-6.68-0.03-13.37-0.06-20.05c-0.03-7.2-0.05-14.39-0.13-21.59c-0.01-0.9,0.24-1.4,1.04-1.86
                			c6.99-3.98,13.95-8.03,20.94-12.02c0.78-0.44,1.1-0.92,1.09-1.84c-0.07-6.2-0.08-12.41-0.11-18.61
                			c-0.05-10.38-0.11-20.77-0.17-31.15c0-0.24,0.03-0.47,0.05-0.87c0.38,0.18,0.68,0.3,0.95,0.46c23.5,13.47,47,26.94,70.5,40.41
                			c13.4,7.68,26.79,15.37,40.21,23.02c1.01,0.58,1.41,1.2,1.41,2.4c0,25.15,0.04,50.31,0.08,75.46
                			C135.63,142.68,135.63,143.08,135.63,143.75z M16.79,119.59c0,0,0.01,0,0.01,0c0,11.93,0,23.86,0,35.78
                			c0,0.62,0.05,1.15-0.76,1.45c-2.78,1.04-4.09,3.12-4.01,6.12c0.09,3.36,3.17,5.86,6.81,5.52c3.14-0.29,5.75-3.67,5.12-6.76
                			c-0.18-0.91,0.08-1.32,0.85-1.76c5.81-3.3,11.58-6.65,17.37-9.98c6.71-3.86,13.41-7.73,20.13-11.57c0.3-0.17,0.94-0.23,1.13-0.04
                			c2.16,2.12,6.2,2.12,8.35,0c0.17-0.17,0.66-0.22,0.87-0.1c4.49,2.56,8.97,5.14,13.44,7.76c0.23,0.13,0.37,0.57,0.4,0.87
                			c0.08,0.98-0.09,2.01,0.14,2.95c0.69,2.77,3.36,4.62,6.15,4.44c2.94-0.19,5.16-2.33,5.66-5.44c0.4-2.5-1.31-5.24-3.9-6.22
                			c-0.59-0.22-0.96-0.43-0.96-1.2c0.03-14.46,0.02-28.93,0.01-43.39c0-0.57,0.18-0.82,0.71-1.05c0.77-0.34,1.54-0.76,2.19-1.29
                			c0.5-0.4,0.83-0.4,1.35-0.1c4.24,2.46,8.48,4.9,12.74,7.32c0.63,0.36,0.85,0.72,0.7,1.47c-0.82,4.22,3.28,7.95,7.47,6.82
                			c2.46-0.66,4.33-2.83,4.47-5.19c0.18-2.88-1.17-5.2-3.75-6.21c-0.76-0.3-1.04-0.66-1.03-1.49c0.03-4.83,0.02-9.67-0.01-14.5
                			c0-0.74,0.17-1.15,0.94-1.44c2.3-0.9,3.66-2.62,3.84-5.11c0.2-2.62-0.91-4.61-3.23-5.82c-2.33-1.22-4.59-0.91-6.61,0.72
                			c-0.64,0.52-1.04,0.48-1.69,0.1c-7.76-4.5-15.54-8.98-23.31-13.46c-4.72-2.72-9.43-5.45-14.16-8.16
                			c-0.58-0.33-0.84-0.63-0.67-1.37c0.16-0.71,0.14-1.52-0.02-2.23c-1-4.57-6.16-6.35-9.81-3.42c-0.38,0.31-0.66,0.61-1.24,0.27
                			c-4.44-2.59-8.9-5.13-13.34-7.72c-0.25-0.15-0.4-0.62-0.42-0.96c-0.05-0.82,0.13-1.66-0.01-2.45c-0.5-2.81-3.08-4.88-5.93-4.88
                			c-3.01,0.01-5.45,2.16-6,5.3c-0.45,2.54,1.24,5.4,3.85,6.34c0.78,0.28,1.02,0.65,1.01,1.47c-0.03,6.58-0.03,13.16,0,19.74
                			c0,0.79-0.24,1.22-0.93,1.61c-5.66,3.22-11.3,6.46-16.92,9.75c-0.85,0.5-1.39,0.53-2.22-0.12c-1.95-1.52-4.17-1.7-6.36-0.54
                			c-2.36,1.24-3.42,3.28-3.2,5.94c0.2,2.37,1.49,4.04,3.65,4.92c0.91,0.37,1.12,0.84,1.11,1.74
                			C16.78,95.87,16.79,107.73,16.79,119.59z"/>
                		<path class="st2" d="M19.2,119.56c0-11.89,0.01-23.78-0.02-35.67c0-0.83,0.21-1.25,1.04-1.57c2.74-1.04,4.22-3.72,3.72-6.56
                			c-0.11-0.64-0.03-1.02,0.62-1.39c12.54-7.18,25.06-14.4,37.57-21.62c0.69-0.4,1.16-0.48,1.77,0.14c0.42,0.42,1.01,0.72,1.58,0.91
                			c0.66,0.22,0.9,0.56,0.9,1.26c-0.03,4.93-0.02,9.87,0,14.8c0,0.68-0.21,1.01-0.88,1.27c-2.87,1.12-4.26,3.75-3.79,6.85
                			c0.05,0.33-0.2,0.89-0.48,1.06c-4.46,2.62-8.95,5.18-13.42,7.78c-0.58,0.34-0.86,0-1.24-0.29c-3.11-2.34-7.38-1.41-9.13,1.98
                			c-1.65,3.2-0.16,7.1,3.26,8.36c0.74,0.27,0.97,0.61,0.96,1.39c-0.04,4.8-0.04,9.59,0,14.39c0,0.74-0.22,1.07-0.93,1.32
                			c-2.86,1.01-4.24,3.83-3.93,6.19c0.42,3.2,2.75,5.39,5.82,5.48c3.31,0.1,6.8-2.57,6.11-7.24c-0.09-0.59,0.03-0.86,0.52-1.14
                			c4.37-2.49,8.74-5,13.09-7.52c0.47-0.27,0.79-0.31,1.27,0.06c0.64,0.5,1.42,0.81,2.09,1.27c0.28,0.2,0.62,0.58,0.62,0.88
                			c0.04,5.11,0.04,10.21,0,15.32c0,0.32-0.37,0.8-0.68,0.93c-3.04,1.32-4.45,3.74-3.9,6.97c0.13,0.78-0.37,0.95-0.83,1.21
                			c-4.09,2.36-8.19,4.72-12.28,7.08c-8.4,4.84-16.8,9.67-25.18,14.53c-0.62,0.36-1.04,0.42-1.6-0.12c-0.46-0.44-1.06-0.82-1.66-0.98
                			c-0.91-0.24-1.02-0.76-1.02-1.57C19.2,143.41,19.2,131.49,19.2,119.56z"/>
                		<path class="st2" d="M86.44,91.15c-0.02,2.67,1.4,4.77,3.94,5.75c0.66,0.25,0.85,0.58,0.85,1.27c-0.02,14.36-0.02,28.72,0,43.08
                			c0,0.7-0.14,1.12-0.88,1.37c-0.66,0.23-1.33,0.6-1.84,1.08c-0.53,0.49-0.88,0.4-1.42,0.09c-4.23-2.47-8.47-4.92-12.73-7.34
                			c-0.69-0.39-0.91-0.77-0.76-1.62c0.5-2.71-1.11-5.43-3.78-6.47c-0.7-0.27-0.93-0.61-0.93-1.34c0.03-4.9,0.03-9.8,0-14.7
                			c0-0.71,0.2-1.08,0.91-1.36c2.43-0.94,3.88-3.11,3.87-5.64c-0.01-2.46-1.47-4.64-3.85-5.55c-0.71-0.27-0.91-0.63-0.91-1.35
                			c0.03-4.9,0.03-9.8,0-14.7c0-0.7,0.17-1.09,0.89-1.36c2.38-0.9,3.85-3.08,3.87-5.53c0.02-2.49-1.4-4.68-3.76-5.61
                			c-0.76-0.3-1.03-0.66-1.02-1.49c0.04-4.83,0.03-9.66,0.01-14.5c0-0.75,0.15-1.21,0.95-1.44c0.54-0.16,1.11-0.46,1.5-0.86
                			c0.63-0.66,1.14-0.56,1.86-0.14c12.45,7.2,24.91,14.39,37.37,21.56c0.56,0.32,0.88,0.63,0.74,1.37c-0.52,2.78,0.95,5.55,3.58,6.55
                			c0.88,0.34,1.16,0.81,1.16,1.64c0,3.05,0.02,6.1,0.03,9.15c0.01,1.82-0.01,3.63,0.02,5.45c0.01,0.59-0.16,0.91-0.74,1.15
                			c-0.75,0.31-1.48,0.71-2.12,1.21c-0.48,0.37-0.79,0.34-1.26,0.07c-4.33-2.5-8.66-5-13.01-7.46c-0.61-0.34-0.68-0.74-0.58-1.33
                			c0.52-3.22-1.62-6.18-4.92-6.84c-3.02-0.6-6.25,1.53-6.92,4.59C86.46,90.33,86.47,90.78,86.44,91.15z"/>
                		<path class="st2" d="M66.36,91.07c0,2.5-0.01,5,0.01,7.5c0,0.59-0.18,0.89-0.77,1.13c-2.95,1.16-4.35,3.75-3.89,6.89
                			c0.05,0.32-0.21,0.87-0.5,1.04c-4.4,2.58-8.82,5.11-13.26,7.62c-0.25,0.14-0.74,0.04-1.03-0.1c-0.76-0.38-1.5-0.81-2.2-1.29
                			c-0.28-0.19-0.62-0.56-0.63-0.85c-0.04-5.03-0.04-10.07,0-15.1c0-0.3,0.32-0.74,0.6-0.87c3.33-1.48,4.51-3.64,4-7.3
                			c-0.04-0.29,0.24-0.77,0.51-0.93c4.43-2.59,8.88-5.15,13.34-7.69c0.24-0.13,0.69-0.06,0.97,0.08c0.54,0.28,0.99,0.84,1.55,0.97
                			c1.23,0.29,1.34,1.06,1.31,2.12C66.31,86.54,66.36,88.81,66.36,91.07z"/>
                		<path class="st2" d="M44.06,59.91c0-0.47,0-0.8,0-1.13c0-5.93,0.01-11.86-0.02-17.78c0-0.78,0.14-1.26,0.97-1.51
                			c0.6-0.18,1.19-0.55,1.66-0.98c0.52-0.47,0.89-0.51,1.51-0.15c4.26,2.49,8.53,4.94,12.82,7.38c0.61,0.35,0.91,0.67,0.71,1.46
                			c-0.16,0.64-0.13,1.38,0,2.03c0.13,0.63-0.02,0.93-0.56,1.23c-5.5,3.07-10.99,6.16-16.49,9.23
                			C44.55,59.76,44.41,59.79,44.06,59.91z"/>
                		<path class="st2" d="M46.41,33.93c-0.01,2.05-1.6,3.61-3.65,3.59c-1.96-0.02-3.59-1.64-3.61-3.59c-0.02-1.95,1.68-3.65,3.66-3.66
                			C44.82,30.26,46.42,31.89,46.41,33.93z"/>
                		<path class="st2" d="M46.42,91.3c-0.01,1.99-1.59,3.59-3.55,3.6c-1.98,0.01-3.7-1.67-3.71-3.62c-0.01-1.97,1.67-3.63,3.68-3.63
                			C44.88,87.65,46.43,89.23,46.42,91.3z"/>
                		<path class="st2" d="M67.62,51.78c-2.06-0.01-3.63-1.6-3.6-3.66c0.03-1.98,1.62-3.51,3.65-3.5c2.07,0.01,3.63,1.59,3.6,3.66
                			C71.25,50.26,69.65,51.79,67.62,51.78z"/>
                		<path class="st2" d="M67.6,137.52c-2.06-0.02-3.62-1.61-3.58-3.68c0.03-1.98,1.65-3.51,3.67-3.49c2.06,0.02,3.61,1.62,3.58,3.68
                			C71.24,136.02,69.63,137.54,67.6,137.52z"/>
                		<path class="st2" d="M17.94,80.33c-2.07-0.02-3.55-1.58-3.51-3.69c0.03-1.97,1.69-3.6,3.62-3.55c1.96,0.04,3.71,1.82,3.65,3.71
                			C21.63,78.81,19.99,80.35,17.94,80.33z"/>
                		<path class="st2" d="M17.94,166.08c-2.06-0.02-3.55-1.59-3.52-3.69c0.03-1.95,1.69-3.59,3.62-3.56c1.93,0.03,3.71,1.84,3.65,3.72
                			C21.63,164.56,19.99,166.1,17.94,166.08z"/>
                		<path class="st2" d="M117.18,80.33c-1.99-0.02-3.59-1.63-3.59-3.6c0-1.95,1.78-3.69,3.72-3.64c2.02,0.05,3.57,1.7,3.53,3.78
                			C120.82,78.87,119.25,80.35,117.18,80.33z"/>
                		<path class="st2" d="M46.42,119.68c-0.02,1.97-1.64,3.6-3.58,3.59c-1.94,0-3.71-1.77-3.69-3.67c0.03-2.04,1.71-3.62,3.81-3.58
                			C44.96,116.05,46.44,117.63,46.42,119.68z"/>
                		<path class="st2" d="M88.86,91.25c0-2.03,1.54-3.59,3.55-3.6c2.01-0.01,3.72,1.66,3.72,3.62c0,1.95-1.76,3.65-3.74,3.63
                			C90.42,94.87,88.86,93.26,88.86,91.25z"/>
                		<path class="st2" d="M88.86,148.24c-0.01-2.03,1.52-3.61,3.52-3.63c2.02-0.02,3.72,1.61,3.75,3.59c0.02,1.93-1.74,3.67-3.71,3.66
                			C90.45,151.85,88.87,150.24,88.86,148.24z"/>
                		<path class="st2" d="M117.22,108.93c-2-0.01-3.61-1.6-3.62-3.56c-0.01-1.99,1.66-3.63,3.69-3.61c2.09,0.02,3.6,1.57,3.57,3.67
                			C120.83,107.44,119.27,108.94,117.22,108.93z"/>
                		<path class="st2" d="M67.61,108.93c-2.06-0.01-3.61-1.6-3.58-3.67c0.03-1.97,1.65-3.52,3.67-3.5c2.02,0.02,3.59,1.59,3.59,3.58
                			C71.27,107.38,69.69,108.94,67.61,108.93z"/>
                		<path class="st2" d="M67.66,80.33c-2.07,0-3.65-1.57-3.63-3.63c0.01-1.95,1.66-3.59,3.62-3.6c1.95-0.01,3.62,1.64,3.63,3.59
                			C71.29,78.74,69.72,80.33,67.66,80.33z"/>
                	</g>
                	<g>
                		<path d="M221.36,144.67c-6.36,0-11.39-1.62-15.07-4.87c-3.69-3.24-5.53-7.71-5.53-13.38V97.74c0-5.68,1.84-10.14,5.53-13.38
                			c3.69-3.24,8.71-4.87,15.07-4.87c6.23,0,11.19,1.64,14.88,4.91c3.69,3.27,5.53,7.72,5.53,13.34h-8.59c0-3.59-1.03-6.36-3.1-8.3
                			c-2.07-1.94-4.98-2.91-8.73-2.91c-3.75,0-6.69,0.96-8.83,2.87c-2.13,1.91-3.2,4.66-3.2,8.26v28.77c0,3.59,1.06,6.36,3.2,8.3
                			c2.13,1.94,5.07,2.91,8.83,2.91c3.75,0,6.66-0.97,8.73-2.91c2.07-1.94,3.1-4.71,3.1-8.3h8.59c0,5.62-1.85,10.07-5.53,13.34
                			C232.55,143.04,227.59,144.67,221.36,144.67z"/>
                		<path d="M278.22,144.5c-6.36,0-11.37-1.64-15.03-4.91c-3.66-3.27-5.49-7.72-5.49-13.34v-12.69c0-5.68,1.83-10.14,5.49-13.38
                			c3.66-3.24,8.67-4.87,15.03-4.87c6.36,0,11.37,1.62,15.03,4.87c3.66,3.25,5.49,7.68,5.49,13.3v12.78c0,5.62-1.83,10.07-5.49,13.34
                			C289.59,142.86,284.58,144.5,278.22,144.5z M278.22,137.55c3.75,0,6.68-0.96,8.78-2.87c2.1-1.91,3.15-4.72,3.15-8.43v-12.69
                			c0-3.71-1.05-6.52-3.15-8.43c-2.1-1.91-5.03-2.87-8.78-2.87c-3.69,0-6.6,0.96-8.73,2.87c-2.13,1.91-3.2,4.72-3.2,8.43v12.69
                			c0,3.71,1.06,6.52,3.2,8.43C271.62,136.59,274.53,137.55,278.22,137.55z"/>
                		<path d="M312.57,143.8V96h7.54v5.74h0.57c0.44-1.97,1.45-3.56,3-4.78c1.56-1.22,3.48-1.83,5.77-1.83c2.1,0,3.91,0.59,5.44,1.78
                			c1.53,1.19,2.61,2.8,3.24,4.82h0.57c0.44-1.97,1.46-3.56,3.05-4.78c1.59-1.22,3.56-1.83,5.91-1.83c3.18,0,5.76,1.14,7.73,3.43
                			c1.97,2.29,2.96,5.26,2.96,8.91v36.33h-7.92v-36.42c0-2.03-0.49-3.58-1.48-4.65c-0.99-1.07-2.4-1.61-4.25-1.61
                			c-1.85,0-3.28,0.54-4.29,1.61c-1.02,1.07-1.53,2.59-1.53,4.56v36.5h-6.87v-36.42c0-2.03-0.52-3.58-1.57-4.65
                			c-1.05-1.07-2.5-1.61-4.34-1.61c-1.78,0-3.16,0.54-4.15,1.61c-0.99,1.07-1.48,2.59-1.48,4.56v36.5H312.57z"/>
                		<path d="M372.95,159.45V96h8.59v9.13h0.1c0.44-3.13,1.96-5.58,4.53-7.34c2.58-1.77,5.83-2.65,9.78-2.65
                			c5.28,0,9.49,1.58,12.64,4.74c3.15,3.16,4.72,7.49,4.72,12.99v13.99c0,5.51-1.57,9.85-4.72,13.04c-3.15,3.19-7.36,4.78-12.64,4.78
                			c-3.94,0-7.19-0.9-9.73-2.69c-2.54-1.8-4.07-4.23-4.58-7.3h-0.29l0.19,10.86v13.91H372.95z M393.08,137.89
                			c3.63,0,6.47-0.98,8.54-2.96c2.07-1.97,3.1-4.81,3.1-8.52v-13.04c0-3.71-1.03-6.55-3.1-8.52c-2.07-1.97-4.91-2.96-8.54-2.96
                			c-3.5,0-6.3,1.01-8.4,3.04c-2.1,2.03-3.15,4.84-3.15,8.43v13.04c0,3.59,1.05,6.4,3.15,8.43
                			C386.79,136.88,389.59,137.89,393.08,137.89z"/>
                		<path d="M445.37,144.67c-5.53,0-9.89-1.29-13.07-3.87c-3.18-2.58-4.77-6.07-4.77-10.47c0-4.46,1.59-7.97,4.77-10.52
                			c3.18-2.55,7.47-3.82,12.88-3.82h16.22v-4.78c0-2.9-0.97-5.16-2.91-6.78c-1.94-1.62-4.63-2.43-8.06-2.43
                			c-3.05,0-5.63,0.61-7.73,1.83s-3.4,2.81-3.91,4.78h-8.59c0.32-2.66,1.38-5.01,3.2-7.04c1.81-2.03,4.2-3.61,7.16-4.74
                			c2.96-1.13,6.25-1.69,9.87-1.69c6.04,0,10.81,1.42,14.31,4.26c3.5,2.84,5.25,6.69,5.25,11.56v32.85h-8.4v-9.13h-0.1
                			c-0.38,3.07-2.02,5.51-4.91,7.3C453.68,143.78,449.94,144.67,445.37,144.67z M447.46,138.5c4.07,0,7.41-0.93,10.02-2.78
                			c2.61-1.85,3.91-4.23,3.91-7.13v-6.78h-16.03c-2.86,0-5.12,0.73-6.77,2.17c-1.65,1.45-2.48,3.42-2.48,5.91c0,2.67,1,4.77,3.01,6.3
                			C441.12,137.74,443.9,138.5,447.46,138.5z"/>
                		<path d="M487.34,143.8V96h8.59v9.13h0.1c0.44-3.19,1.88-5.65,4.29-7.39c2.42-1.74,5.63-2.61,9.64-2.61
                			c5.28,0,9.48,1.48,12.59,4.43c3.12,2.96,4.68,6.98,4.68,12.08v32.16h-8.59v-31.29c0-3.42-1-6.04-3.01-7.87
                			c-2-1.83-4.72-2.74-8.16-2.74c-3.56,0-6.38,0.99-8.44,2.96c-2.07,1.97-3.1,4.81-3.1,8.52v30.42H487.34z"/>
                		<path d="M552.88,159.45l7.73-18.6L540.58,96h9.35l12.78,29.55c0.44,0.99,0.87,2.16,1.29,3.52c0.41,1.36,0.75,2.51,1,3.43
                			c0.25-0.93,0.6-2.07,1.05-3.43c0.44-1.36,0.89-2.53,1.34-3.52L579.31,96h8.97l-26.43,63.45H552.88z"/>
                		<path d="M656.01,144.5c-6.36,0-11.37-1.64-15.03-4.91c-3.66-3.27-5.49-7.72-5.49-13.34v-12.69c0-5.68,1.83-10.14,5.49-13.38
                			c3.66-3.24,8.67-4.87,15.03-4.87c6.36,0,11.37,1.62,15.03,4.87c3.66,3.25,5.49,7.68,5.49,13.3v12.78c0,5.62-1.83,10.07-5.49,13.34
                			C667.38,142.86,662.37,144.5,656.01,144.5z M656.01,137.55c3.75,0,6.68-0.96,8.78-2.87c2.1-1.91,3.15-4.72,3.15-8.43v-12.69
                			c0-3.71-1.05-6.52-3.15-8.43c-2.1-1.91-5.03-2.87-8.78-2.87c-3.69,0-6.6,0.96-8.73,2.87c-2.13,1.91-3.2,4.72-3.2,8.43v12.69
                			c0,3.71,1.06,6.52,3.2,8.43C649.41,136.59,652.32,137.55,656.01,137.55z"/>
                		<path d="M705.62,143.8v-35.89h-15.26v-7.13h15.26v-8.26c0-3.77,1.3-6.74,3.91-8.91c2.61-2.17,6.2-3.26,10.78-3.26h15.36v7.13
                			h-15.36c-4.07,0-6.11,1.68-6.11,5.04v8.26h21.47v7.13h-21.47v35.89H705.62z"/>
                		<path d="M804.36,143.8V87.49h-19.08v-7.13h46.75v7.13h-19.08v56.32H804.36z"/>
                		<path d="M846.05,143.8V80.36h8.59v24.77h0.1c0.44-3.19,1.88-5.65,4.29-7.39c2.42-1.74,5.63-2.61,9.64-2.61
                			c5.28,0,9.48,1.48,12.59,4.43c3.12,2.96,4.67,6.98,4.67,12.08v32.16h-8.59v-31.29c0-3.42-1-6.07-3.01-7.95
                			c-2-1.88-4.72-2.82-8.16-2.82c-3.56,0-6.38,1.01-8.44,3.04c-2.07,2.03-3.1,4.9-3.1,8.6v30.42H846.05z"/>
                		<path d="M902.63,143.8v-7.13h18.6v-33.55h-16.7V96h25.28v40.67h17.65v7.13H902.63z M924.57,87.4c-2.1,0-3.75-0.49-4.96-1.48
                			c-1.21-0.99-1.81-2.32-1.81-4c0-1.74,0.6-3.11,1.81-4.13c1.21-1.01,2.86-1.52,4.96-1.52c2.1,0,3.75,0.51,4.96,1.52
                			c1.21,1.01,1.81,2.39,1.81,4.13c0,1.68-0.61,3.01-1.81,4C928.32,86.91,926.67,87.4,924.57,87.4z"/>
                		<path d="M960.54,143.8V96h8.59v9.13h0.1c0.44-3.19,1.88-5.65,4.29-7.39c2.42-1.74,5.63-2.61,9.64-2.61
                			c5.28,0,9.48,1.48,12.59,4.43c3.12,2.96,4.68,6.98,4.68,12.08v32.16h-8.59v-31.29c0-3.42-1-6.04-3.01-7.87
                			c-2-1.83-4.72-2.74-8.16-2.74c-3.56,0-6.38,0.99-8.44,2.96c-2.07,1.97-3.1,4.81-3.1,8.52v30.42H960.54z"/>
                		<path d="M1024.36,159.45v-7.13h16.7c5.15,0,7.73-2.26,7.73-6.78v-6.08l0.19-8.69h-0.19c-0.32,3.07-1.73,5.51-4.25,7.3
                			c-2.51,1.8-5.74,2.69-9.68,2.69c-5.41,0-9.67-1.61-12.78-4.82c-3.12-3.22-4.67-7.55-4.67-12.99v-10.08
                			c0-5.45,1.56-9.76,4.67-12.95c3.11-3.19,7.38-4.78,12.78-4.78c3.94,0,7.17,0.9,9.68,2.69c2.51,1.8,3.93,4.23,4.25,7.3h0.1V96h8.49
                			v49.54c0,4.29-1.45,7.68-4.34,10.17c-2.89,2.49-6.92,3.74-12.07,3.74H1024.36z M1037.43,133.98c3.56,0,6.36-1.01,8.4-3.04
                			c2.03-2.03,3.05-4.84,3.05-8.43v-9.13c0-3.59-1.02-6.4-3.05-8.43c-2.04-2.03-4.83-3.04-8.4-3.04c-3.63,0-6.44,0.99-8.44,2.96
                			c-2,1.97-3.01,4.81-3.01,8.52v9.13c0,3.71,1,6.55,3.01,8.52C1030.99,133,1033.81,133.98,1037.43,133.98z"/>
                		<path d="M1093.24,144.5c-5.41,0-9.83-1.13-13.26-3.39c-3.43-2.26-5.15-5.36-5.15-9.3h8.78c0,1.8,0.94,3.2,2.81,4.21
                			c1.88,1.01,4.21,1.52,7.01,1.52h4.01c3.37,0,5.88-0.62,7.54-1.87c1.65-1.24,2.48-2.91,2.48-5c0-2.03-0.78-3.64-2.34-4.82
                			c-1.56-1.19-3.8-1.98-6.73-2.39l-7.06-1.04c-5.22-0.81-9.06-2.32-11.54-4.52c-2.48-2.2-3.72-5.24-3.72-9.13
                			c0-4.35,1.54-7.68,4.63-9.99c3.08-2.32,7.52-3.48,13.31-3.48h3.63c5.34,0,9.62,1.09,12.83,3.26c3.21,2.17,4.82,5.06,4.82,8.65
                			h-8.78c0-1.51-0.81-2.71-2.43-3.61c-1.62-0.9-3.83-1.35-6.63-1.35h-3.63c-2.99,0-5.29,0.56-6.92,1.69
                			c-1.62,1.13-2.43,2.74-2.43,4.82c0,3.48,2.7,5.62,8.11,6.43l7.06,1.04c5.66,0.81,9.78,2.32,12.35,4.52
                			c2.58,2.2,3.86,5.39,3.86,9.56c0,4.4-1.54,7.87-4.63,10.39c-3.09,2.52-7.74,3.78-13.98,3.78H1093.24z"/>
                	</g>
                </g>
                </svg>
              </div>
          </div>

      </div>

  </body>

  <style>

      html, body {
          margin: 0px;
          padding: 0px;
          overflow: scroll;
          background-color: #EEEEEE;
          position: fixed;
          top: 0;
          bottom: 0;
          right: 0;
          left: 0;
          touch-action: manipulation;
          -webkit-user-select: none;
          -khtml-user-select: none;
          -moz-user-select: none;
          -ms-user-select: none;
          user-select: none;
      }

      .material-symbols-rounded {
          display: flex;
          justify-content: center;
          align-items: center;
          border-radius: 10px;
          filter: brightness(0) invert(1);
          transform: scale(0.8);
      }

      #mainContainer {
          display: flex;
          align-content: center;
          justify-content: space-between;
          box-sizing: border-box;
          overflow: hidden;
          width: 100vw;
          height: 100vh;
          height: calc(var(--vh, 1vh) * 100);
      }

      .swiper {
          box-sizing: border-box;
          display: flex;
      }

      .swiper-wrapper {
          box-sizing: border-box;
          display: flex;
      }

      .swiper-slide {
          display: flex;
      }

      .graphSlide {
          background-color: #E5E5E5;
          border-radius: 10px;
          display: flex;
          position: relative;
          flex-flow: column nowrap;
      }

      .labelTickBox {
          cursor: pointer;
          border-radius: 5px;
          margin-right: 2%;
      }

      .chartLabels {
          min-height: 10%;
          padding: 5% 5% 0 5%;
          display: flex;
          align-items: center;
          flex-flow: row nowrap;
          justify-content: space-between;
      }

      .chartLabel {
          display: flex;
          flex-flow: row nowrap;
          align-items: center;
      }

      .tick0 {
          background-color: transparent;
          border: 3px solid #4284E6;
      }

      .tick1 {
          background-color: transparent;
          border: 3px solid #FBAD39;
      }

      .tick2 {
          background-color: transparent;
          border: 3px solid #E55E97;
      }

      .name0 {
          color: #4284E6;
      }

      .name1 {
          color: #FBAD39;
      }

      .name2 {
          color: #E55E97;
      }

      ::placeholder { /* Chrome, Firefox, Opera, Safari 10.1+ */
          color: rgb(56, 56, 56, 0.3);
          opacity: 1; /* Firefox */
      }

      :-ms-input-placeholder { /* Internet Explorer 10-11 */
          color: rgb(56, 56, 56, 0.3);
      }1

      ::-ms-input-placeholder { /* Microsoft Edge */
          color: rgb(56, 56, 56, 0.3);
      }

      input {
          background-color: transparent;
          border: none;
          text-decoration: none;
          outline: none;
          width: 10%;
          font-family: 'Helvetica', sans-serif;
          font-weight: bolder;
          -webkit-user-select: initial;
          -khtml-user-select: initial;
          -moz-user-select: initial;
          -ms-user-select: initial;
          user-select: initial;
      }

      .chartContainer {
          display: flex;
          justify-content: center;
          align-items: center;
      }

      .logoSlide {
          align-items: center;
          justify-content: center;
          align-content: center;
      }

      #logoImg {
          width: 45%;
          height: auto;
      }

      .outerButtonContainer {
          flex-grow: 1;
          display: flex;
          flex-flow: column nowrap;
          align-content: flex-end;
          margin: 3%;
      }

      .buttonContainerAction {
          display: flex;
          flex-flow: row nowrap;
          justify-content: space-evenly;
          align-items: stretch;
      }

      .buttonContainerDrive {
          display: flex;
          flex-wrap: wrap;
          justify-content: space-between;
          flex-grow: 1;
      }

      .buttonContainerAction {
          min-height: 20%;
      }

      .btn {
          flex-grow: 1;
          display: flex;
          justify-content: center;
          align-items: center;
          align-content: center;
          background-color:#0A2237;
          border-radius: 10px;
          margin: 1%;
          border: none;
          cursor: pointer;
          min-width: 31%;
          overflow: hidden;
      }

      .actionBtn {
          min-height: 30%;
      }

      .logoLandscape {
          display: flex;
          justify-content: flex-start;
          align-items: center;
      }

      #logoLandscapeImg {
          height: auto;
          width: 100%;
      }

      @media screen and (orientation: portrait) {
          #mainContainer {
              flex-flow: column nowrap;
          }

          .swiper {
              width: 100vw;
              height: 57vh;
              padding: 4% 4% 0 4%;
              flex-basis: 57vh;
          }

          .logoSlide { visibility: visible; width: auto; }
          .logoLandscape { visibility: hidden; height: 0; padding: 0; }
          .toggle { transform: scale(0.5); }

      }

      @media screen and (orientation: landscape) {
          #mainContainer {
              flex-flow: row nowrap;
          }

          .swiper {
              width: 57vw;
              height: 100vh;
              height: calc(var(--vh, 1vh) * 100);
              padding: 3% 0 3% 3%;
          }

          .logoSlide { visibility: hidden; width: 0;}
          .logoLandscape { visibility: visible; height: auto; padding: 3%;}
          .toggle { transform: scale(0.8); }

          @media screen and (pointer: fine) and (min-device-width: 500px) {

              body {
                  display: flex;
                  justify-content: center;
                  align-items: center;
              }

              #mainContainer {
                  width: 70vw;
                  height: 60vh;
                  height: calc(var(--vh, 1vh) * 60);
              }

              .swiper {
                  width: 40vw;
                  height: 60vh;
                  height: calc(var(--vh, 1vh) * 60);
              }

          }

      }

  </style>

  <script>

      var swiper = new Swiper(".mySwiper", {});

      var gateway = `ws://${window.location.hostname}/ws`;
      var websocket, ctx;

      var isMobile = window.matchMedia("(pointer:coarse)").matches;

      var graphContainer = document.getElementsByClassName("graphSlide")[0];
      var chartLabels = document.getElementsByClassName("chartLabels")[0];
      var labelTickBoxes = document.getElementsByClassName("labelTickBox");
      var graphNames = document.getElementsByClassName("graphName");
      var graph = document.getElementById("chart");
      var ctx = graph.getContext('2d');

      var keyToggle = true;
      var buttonToggle = [false, false, false];
      var graphToggle = [false, false, false];
      var graphColors = ["#4284E6","#FBAD39","#E55E97"];
      var fontSize = 10;

      var dataPoints = 200;

      //var graphData = [[0,0,0,0,0,0,0,0,0,0],[1,3,2,4,3,5,4,6,5,7],[1,1,2,3,5,8,13,21,34,25]]; //test
      var graphData = [[],[],[]]

      for(let i = 0; i<3; i++) {
          for(let j = 0; j<dataPoints; j++) {
              graphData[i].push(0);
          }
      }

      setInterval(updateView, 100);
      window.addEventListener('load', onLoad);

      function updateView() {
          let vh = window.innerHeight * 0.01;
          document.documentElement.style.setProperty('--vh', `${vh}px`);

          var graphContainerWidth = graphContainer.offsetWidth;
          var graphContainerHeight = graphContainer.offsetHeight;
          var chartLabelsHeight = chartLabels.offsetHeight;

          graph.style.width = `${graphContainerWidth}px`;
          graph.style.height = `${0.95*graphContainerHeight-chartLabelsHeight}px`;

          graph.width = `${graphContainerWidth}`;
          graph.height = `${0.95*graphContainerHeight-chartLabelsHeight}`;

          fontSize = 0.26*chartLabelsHeight;

          updateGraph();

          for(tickBox of labelTickBoxes) {
              tickBox.style.minHeight = `${0.3*chartLabelsHeight}px`;
              tickBox.style.minWidth = `${0.3*chartLabelsHeight}px`;
          }

          for(graphName of graphNames) {
              graphName.style.fontSize = `${0.26*chartLabelsHeight}px`;
              graphName.style.width = `${0.18*graphContainerWidth}px`;
          }

          if(window.innerHeight > window.innerWidth) {
              swiper.enable();
          } else {
              swiper.disable();
              swiper.activeIndex = 0;
          }

      }

      function updateGraph() {

          ctx.clearRect(0,0,graph.width,graph.height);

          var canvasWidth = 0.01*graph.offsetWidth;
          var canvasHeight = 0.01*graph.offsetHeight;

          var graphTop = 5*canvasHeight;
          var graphBottom = 95*canvasHeight;
          var graphLeft = 10*canvasWidth;
          var graphRight = 90*canvasWidth;

          var activeData = [];
          var activeDataPos = [];
          var dataIntervalX = (graphRight-(graphLeft+canvasWidth))/dataPoints;
          var dataIntervalY;
          var activeGraphColors = [];
          var dataTop = 0;
          var dataBottom = 0;

          for(let i = 0; i<3; i++) {
              if(graphToggle[i]) {
                  activeData.push(graphData[i]);
                  activeDataPos.push([]);
                  activeGraphColors.push(graphColors[i]);
              }
          }

          ctx.roundRect(graphLeft,graphTop+canvasWidth,graphRight-graphLeft,0.5*canvasWidth,10);
          ctx.fillStyle = 'rgb(61,61,61,0.05)';
          ctx.fill();

          // ctx.roundRect(graphLeft+1.5*canvasWidth,(graphBottom-graphTop)/2+2.4*canvasWidth,graphRight-graphLeft-1.5*canvasWidth,0.5*canvasWidth,10);
          // ctx.fillStyle = 'rgb(61,61,61,0.05)';
          // ctx.fill();

          if(activeData.length) {

              var maxRow = activeData.map(function(row){ return Math.max.apply(Math, row); });
              dataTop = Math.max.apply(null, maxRow);

              var minRow = activeData.map(function(row){ return Math.min.apply(Math, row); });
              dataBottom = Math.min.apply(null, minRow);

              if(dataTop-dataBottom) {
                  dataIntervalY = ((graphBottom-graphTop-2.7*canvasWidth)/(dataTop-dataBottom));
              } else {
                  dataIntervalY = 0;
              }

              if(dataBottom<0&&dataTop>0) {
                  ctx.roundRect(graphLeft+1.5*canvasWidth,graphBottom-dataIntervalY*Math.abs(dataBottom)-1.5*canvasWidth-1.5,graphRight-graphLeft-1.5*canvasWidth,0.5*canvasWidth,10);
                  ctx.fillStyle = 'rgb(61,61,61,0.3)';
                  ctx.fill();
              }

              for(let i = 0; i<activeData.length; i++) {
                  for(let j = 0; j<dataPoints; j++) {
                      activeDataPos[i].push([j*dataIntervalX+graphLeft+1.5*canvasWidth,
                      graphBottom-(activeData[i][j]-dataBottom)*dataIntervalY-1.5*canvasWidth]);
                  }
              }

              for(let i = 0; i<activeData.length; i++) {
                  for(let j = 0; j<(activeDataPos[i].length-1); j++) {
                      ctx.beginPath();
                      ctx.moveTo(activeDataPos[i][j][0],activeDataPos[i][j][1]);
                      ctx.lineTo(activeDataPos[i][j+1][0],activeDataPos[i][j+1][1]);
                      ctx.lineWidth = 3;
                      ctx.strokeStyle = activeGraphColors[i];
                      ctx.stroke();
                  }
              }

              ctx.fillStyle = 'black';

              if(dataTop-dataBottom) {
                  ctx.font = `${fontSize}px Helvetica`;
                  ctx.textAlign = "right";
                  ctx.fillText(dataTop, graphLeft-canvasWidth, graphTop+0.75*canvasWidth+fontSize/2);
              }

              ctx.font = `${fontSize}px Helvetica`;
              ctx.textAlign = "right";
              ctx.fillText(dataBottom, graphLeft-canvasWidth, graphBottom-0.75*canvasWidth+fontSize/4);

          }

          ctx.roundRect(graphLeft+canvasWidth,graphTop,0.5*canvasWidth,graphBottom-graphTop,10);
          ctx.fillStyle = 'black';
          ctx.fill();

          ctx.roundRect(graphLeft,graphBottom-1.5*canvasWidth,graphRight-graphLeft,0.5*canvasWidth,10);
          ctx.fillStyle = 'black';
          ctx.fill();

          ctx.roundRect(graphLeft,graphTop+canvasWidth,2*canvasWidth+0.5*canvasWidth,0.5*canvasWidth,10);
          ctx.fillStyle = 'black';
          ctx.fill();

      }

      //hentet fra: https://codepen.io/simon-wu/pen/ExgLEXQ
      CanvasRenderingContext2D.prototype.roundRect = function (x, y, width, height, radius) {
          if (width < 2 * radius) radius = width / 2;
          if (height < 2 * radius) radius = height / 2;
          this.beginPath();
          this.moveTo(x + radius, y);
          this.arcTo(x + width, y, x + width, y + height, radius);
          this.arcTo(x + width, y + height, x, y + height, radius);
          this.arcTo(x, y + height, x, y, radius);
          this.arcTo(x, y, x + width, y, radius);
          this.closePath();
          return this;
      }

      function updateData(newData) {
          var index = parseInt(newData.charAt(0))-1;
          var data = parseFloat(newData.substring(1));
          graphData[index].shift();
          graphData[index].push(data);
      }

      function toggleKeys() {
          keyToggle = !keyToggle;
      }

      function toggleGraph(index) {
          if(graphToggle[index]) {
              labelTickBoxes[index].style.backgroundColor = "transparent";
          } else {
              labelTickBoxes[index].style.backgroundColor = graphColors[index];
          }

          graphToggle[index] = !graphToggle[index];
      }

      var buttons = document.getElementsByClassName("btn");

      function initWebSocket() {
          console.log('Trying to open a WebSocket connection...');
          websocket = new WebSocket(gateway);
          websocket.onopen    = onOpen;
          websocket.onclose   = onClose;
          websocket.onmessage = onMessage;
      }

      function onOpen(event) {
          console.log('Connection opened');
      }

      function onClose(event) {
          console.log('Connection closed');
          setTimeout(initWebSocket, 2000);
      }

      function onMessage(event) {
          updateData(event.data);
      }

      function onLoad(event) {

          for(btn of buttons) {
              btn.addEventListener('touchstart', handleTouchDown);
              btn.addEventListener('touchend', handleTouchUp);
              if(!isMobile) {
                  btn.addEventListener('mousedown', handleTouchDown);
                  btn.addEventListener('mouseup', handleTouchUp);
              }
          }

          window.addEventListener('keydown', handleKeyDown);
          window.addEventListener('keyup', handleKeyUp);

          initWebSocket();
      }

      function handleTouchDown(event) {
          var btnClass;

          if(typeof event.srcElement.className=="string") {
            btnClass = event.srcElement.className.split(" ");
          } else {
            btnClass = event.srcElement.className.animVal.split(" ");
          }

          var btn = btnClass[btnClass.length-1];

          handleButtonDown(btn);
      }

      function handleKeyDown(event) {
          if(!keyToggle) return;
          btn = event.code;
          handleButtonDown(btn);
      }

      function handleButtonDown(btn) {

          document.getElementsByClassName(btn)[0].style.transform = "scale(0.95)";

          switch (btn) {
              case "Digit1":

                  break;

              case "Digit2":

                  break;

              case "Digit3":

                  break;

              case "KeyQ":
                  websocket.send('q')
                  break;

              case "KeyW":
                  websocket.send('w')
                  break;

              case "KeyE":
                  websocket.send('e')
                  break;

              case "KeyA":
                  websocket.send('a')
                  break;

              case "KeyS":
                  websocket.send('s')
                  break;

              case "KeyD":
                  websocket.send('d')
                  break;

              default:
                  break;
          }

      }

      function handleTouchUp(event) {
          var btnClass;

          if(typeof event.srcElement.className=="string") {
            btnClass = event.srcElement.className.split(" ");
          } else {
            btnClass = event.srcElement.className.animVal.split(" ");
          }

          var btn = btnClass[btnClass.length-1];

          handleButtonUp(btn);
      }

      function handleKeyUp(event) {
          if(!keyToggle) return;
          btn = event.code;
          handleButtonUp(btn);
      }

      function handleButtonUp(btn) {
          document.getElementsByClassName(btn)[0].style.transform = "scale(1)";

          switch (btn) {
              case "Digit1":
                  if(buttonToggle[0]) {
                      document.getElementsByClassName("toggleBtn0")[0].innerHTML = '<svg class="material-symbols-rounded toggleBtn0 toggle Digit1" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="Digit1" d="M23.95 44.05Q23.35 44.05 22.8 43.9Q22.25 43.75 21.8 43.35Q14.55 37.15 10.85 31.325Q7.15 25.5 7.15 20.4Q7.15 12.55 12.25 7.85Q17.35 3.15 24 3.15Q31.4 3.15 36 7.775Q40.6 12.4 41 19.9L44.3 16.55Q44.85 16 45.575 16Q46.3 16 46.85 16.55Q47.4 17.15 47.4 17.85Q47.4 18.55 46.85 19.1L40.25 25.7Q39.9 26.05 39.475 26.225Q39.05 26.4 38.6 26.4Q38.15 26.4 37.725 26.225Q37.3 26.05 36.95 25.7L30.35 19.1Q29.8 18.55 29.8 17.85Q29.8 17.15 30.4 16.55Q30.9 16 31.6 16Q32.3 16 32.9 16.55L36.45 20.1Q36.15 14.85 32.875 11.35Q29.6 7.85 24 7.85Q18.95 7.85 15.4 11.4Q11.85 14.95 11.85 20.4Q11.85 24.25 14.75 28.925Q17.65 33.6 24 38.9Q24.65 38.25 25.55 37.375Q26.45 36.5 27.15 35.8Q26.9 35.25 26.775 34.675Q26.65 34.1 26.65 33.65Q26.65 31.4 28.225 29.85Q29.8 28.3 32 28.3Q34.25 28.3 35.8 29.85Q37.35 31.4 37.35 33.65Q37.35 35.9 35.8 37.45Q34.25 39 32 39Q31.7 39 31.425 38.975Q31.15 38.95 30.75 38.85Q29.6 39.95 28.525 41.025Q27.45 42.1 26.15 43.25Q25.7 43.65 25.125 43.85Q24.55 44.05 23.95 44.05Z"/></svg>';
                      websocket.send('F');
                  } else {
                      document.getElementsByClassName("toggleBtn0")[0].innerHTML = '<svg class="material-symbols-rounded toggleBtn0 toggle Digit1" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="Digit1" d="M24 19Q23 19 22.325 18.325Q21.65 17.65 21.65 16.65V10.85L19.75 12.75Q19.1 13.2 18.125 13.15Q17.15 13.1 16.6 12.5Q15.9 11.8 15.9 10.8Q15.9 9.8 16.6 9.1L22.35 3.35Q22.7 3 23.125 2.825Q23.55 2.65 24 2.65Q24.45 2.65 24.875 2.825Q25.3 3 25.65 3.35L31.45 9.15Q32.15 9.85 32.125 10.825Q32.1 11.8 31.4 12.5Q30.85 13.1 29.875 13.125Q28.9 13.15 28.25 12.7L26.35 10.85V16.65Q26.35 17.65 25.675 18.325Q25 19 24 19ZM24 45.35Q23.55 45.35 23.125 45.175Q22.7 45 22.35 44.65L16.3 38.6Q15.6 37.9 15.625 36.925Q15.65 35.95 16.35 35.25Q16.9 34.65 17.875 34.65Q18.85 34.65 19.55 35.05L21.65 37.1V31.3Q21.65 30.3 22.325 29.625Q23 28.95 24 28.95Q25 28.95 25.675 29.625Q26.35 30.3 26.35 31.3V37.1L28.5 35Q29.15 34.55 30.125 34.6Q31.1 34.65 31.65 35.25Q32.35 35.95 32.35 36.95Q32.35 37.95 31.65 38.65L25.65 44.65Q25.3 45 24.875 45.175Q24.45 45.35 24 45.35ZM35.5 31.4Q34.9 30.85 34.9 29.875Q34.9 28.9 35.3 28.2L37.15 26.35H31.35Q30.35 26.35 29.675 25.675Q29 25 29 24Q29 23 29.675 22.325Q30.35 21.65 31.35 21.65H37.15L35.25 19.75Q34.8 19.1 34.85 18.125Q34.9 17.15 35.5 16.6Q36.2 15.9 37.2 15.9Q38.2 15.9 38.9 16.6L44.65 22.35Q45 22.7 45.175 23.125Q45.35 23.55 45.35 24Q45.35 24.45 45.175 24.875Q45 25.3 44.65 25.65L38.85 31.45Q38.15 32.15 37.175 32.125Q36.2 32.1 35.5 31.4ZM9.1 31.4 3.35 25.65Q3 25.3 2.825 24.875Q2.65 24.45 2.65 24Q2.65 23.55 2.825 23.125Q3 22.7 3.35 22.35L9.2 16.5Q9.9 15.8 10.875 15.825Q11.85 15.85 12.55 16.55Q13.15 17.1 13.2 18.075Q13.25 19.05 12.8 19.7L10.9 21.65H16.7Q17.7 21.65 18.375 22.325Q19.05 23 19.05 24Q19.05 25 18.375 25.675Q17.7 26.35 16.7 26.35H10.9L12.75 28.25Q13.2 28.9 13.15 29.875Q13.1 30.85 12.5 31.4Q11.8 32.1 10.8 32.1Q9.8 32.1 9.1 31.4Z"/></svg>';
                      websocket.send('f');
                  }
                  buttonToggle[0] = !buttonToggle[0];
                  break;

              case "Digit2":
                  if(buttonToggle[1]) {
                      document.getElementsByClassName("toggleBtn1")[0].innerHTML = '<svg class="material-symbols-rounded toggleBtn1 toggle Digit2" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="Digit2" d="M24 45.25Q19.6 45.25 15.725 43.6Q11.85 41.95 8.95 39.05Q6.05 36.15 4.4 32.3Q2.75 28.45 2.75 24Q2.75 19.55 4.4 15.675Q6.05 11.8 8.95 8.925Q11.85 6.05 15.7 4.375Q19.55 2.7 24 2.7Q28.45 2.7 32.325 4.375Q36.2 6.05 39.075 8.925Q41.95 11.8 43.625 15.675Q45.3 19.55 45.3 24Q45.3 28.45 43.625 32.3Q41.95 36.15 39.075 39.025Q36.2 41.9 32.325 43.575Q28.45 45.25 24 45.25ZM24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24ZM24 40.55Q30.95 40.55 35.75 35.725Q40.55 30.9 40.55 24Q40.55 17.05 35.75 12.25Q30.95 7.45 24.05 7.45Q17.1 7.45 12.275 12.25Q7.45 17.05 7.45 23.95Q7.45 30.9 12.275 35.725Q17.1 40.55 24 40.55Z"/></svg>';
                      websocket.send('G');
                  } else {
                      document.getElementsByClassName("toggleBtn1")[0].innerHTML = '<svg class="material-symbols-rounded toggleBtn1 toggle Digit2" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="Digit2" d="M24 33.3Q27.9 33.3 30.6 30.6Q33.3 27.9 33.3 24Q33.3 20.1 30.6 17.4Q27.9 14.7 24 14.7Q20.1 14.7 17.4 17.4Q14.7 20.1 14.7 24Q14.7 27.9 17.4 30.6Q20.1 33.3 24 33.3ZM24 45.25Q19.6 45.25 15.725 43.575Q11.85 41.9 8.975 39.025Q6.1 36.15 4.425 32.275Q2.75 28.4 2.75 24Q2.75 19.6 4.425 15.725Q6.1 11.85 8.975 8.975Q11.85 6.1 15.725 4.4Q19.6 2.7 24 2.7Q28.4 2.7 32.275 4.4Q36.15 6.1 39.025 8.975Q41.9 11.85 43.6 15.725Q45.3 19.6 45.3 24Q45.3 28.4 43.6 32.275Q41.9 36.15 39.025 39.025Q36.15 41.9 32.275 43.575Q28.4 45.25 24 45.25ZM24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24ZM23.95 40.55Q30.8 40.55 35.675 35.725Q40.55 30.9 40.55 24Q40.55 17.15 35.675 12.3Q30.8 7.45 24 7.45Q17.15 7.45 12.3 12.3Q7.45 17.15 7.45 24Q7.45 30.9 12.3 35.725Q17.15 40.55 23.95 40.55Z"/></svg>';
                      websocket.send('g');
                  }
                  buttonToggle[1] = !buttonToggle[1];
                  break;

              case "Digit3":
                  if(buttonToggle[2]) {
                      document.getElementsByClassName("toggleBtn2")[0].innerHTML = '<svg class="material-symbols-rounded toggleBtn2 toggle Digit3" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="Digit3" d="M9.45 43.25Q7.5 43.25 6.125 41.875Q4.75 40.5 4.75 38.55V9.45Q4.75 7.5 6.125 6.1Q7.5 4.7 9.45 4.7H38.55Q40.5 4.7 41.9 6.1Q43.3 7.5 43.3 9.45V38.55Q43.3 40.5 41.9 41.875Q40.5 43.25 38.55 43.25ZM9.45 38.55H38.55Q38.55 38.55 38.55 38.55Q38.55 38.55 38.55 38.55V9.45Q38.55 9.45 38.55 9.45Q38.55 9.45 38.55 9.45H9.45Q9.45 9.45 9.45 9.45Q9.45 9.45 9.45 9.45V38.55Q9.45 38.55 9.45 38.55Q9.45 38.55 9.45 38.55Z"/></svg>';
                      websocket.send('H');
                  } else {
                      document.getElementsByClassName("toggleBtn2")[0].innerHTML = '<svg class="material-symbols-rounded toggleBtn2 toggle Digit3" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="Digit3" d="M9.45 43.25Q7.5 43.25 6.125 41.875Q4.75 40.5 4.75 38.55V9.45Q4.75 7.5 6.125 6.1Q7.5 4.7 9.45 4.7H38.55Q40.5 4.7 41.9 6.1Q43.3 7.5 43.3 9.45V38.55Q43.3 40.5 41.9 41.875Q40.5 43.25 38.55 43.25ZM9.45 38.55H38.55Q38.55 38.55 38.55 38.55Q38.55 38.55 38.55 38.55V9.45Q38.55 9.45 38.55 9.45Q38.55 9.45 38.55 9.45H9.45Q9.45 9.45 9.45 9.45Q9.45 9.45 9.45 9.45V38.55Q9.45 38.55 9.45 38.55Q9.45 38.55 9.45 38.55ZM20.85 31.9Q21.3 31.9 21.725 31.725Q22.15 31.55 22.5 31.2L34.3 19.4Q34.9 18.75 34.925 17.825Q34.95 16.9 34.3 16.2Q33.6 15.55 32.7 15.55Q31.8 15.55 31.1 16.2L20.85 26.5L16.9 22.55Q16.25 21.9 15.35 21.9Q14.45 21.9 13.75 22.55Q13.1 23.25 13.1 24.175Q13.1 25.1 13.75 25.75L19.2 31.2Q19.55 31.55 19.95 31.725Q20.35 31.9 20.85 31.9ZM9.45 38.55Q9.45 38.55 9.45 38.55Q9.45 38.55 9.45 38.55V9.45Q9.45 9.45 9.45 9.45Q9.45 9.45 9.45 9.45Q9.45 9.45 9.45 9.45Q9.45 9.45 9.45 9.45V38.55Q9.45 38.55 9.45 38.55Q9.45 38.55 9.45 38.55Z"/></svg>';
                      websocket.send('h');
                  }
                  buttonToggle[2] = !buttonToggle[2];
                  break;

              case "KeyQ":
                  websocket.send('Q')
                  break;

              case "KeyW":
                  websocket.send('W')
                  break;

              case "KeyE":
                  websocket.send('E')
                  break;

              case "KeyA":
                  websocket.send('A')
                  break;

              case "KeyS":
                  websocket.send('S')
                  break;

              case "KeyD":
                  websocket.send('D')
                  break;

              default:
                  break;
          }

      }

  </script>

</html>

)rawliteral";
