let count;
let count_el;
let text1;
let text2;
let text3;
let button1;
let button2;
let button3;
let done;
let refresh;
let butt1_ret;
let butt2_ret;
let butt3_ret;
let count1;
let count2;
let count3;

count = 0;
count_el = document.getElementById("count_el");
text1 = document.getElementById("text1");
text2 = document.getElementById("text2");
text3 = document.getElementById("text3");
button1 = document.getElementById("button1");
button2 = document.getElementById("button2");
button3 = document.getElementById("button3");
refresh = document.getElementById("refresh");
count1 = document.getElementById("count1");
count2 = document.getElementById("count2");
count3 = document.getElementById("count3");

let first = 0;
function ft_firstButt() {
  count++;
  first++;
  count_el.innerText = count;
  count1.innerText = first;
  return count;
}

let second = 0;
function ft_secondButt() {
  count++;
  second++;
  count_el.innerText = count;
  count2.innerText = second;
  return count;
}

let third = 0;
function ft_thirdButt() {
  count++;
  third++;
  count_el.innerText = count;
  count3.innerText = third;
  return count;
}

function ft_refreshButt() {
  count = 0;
  first = 0;
  second = 0;
  third = 0;
  count_el.innerText = count;
  count1.innerText = first;
  count2.innerText = second;
  count3.innerText = third;
}

refresh.onclick = ft_refreshButt;
button1.onclick = ft_firstButt;
button2.onclick = ft_secondButt;
button3.onclick = ft_thirdButt;
button1.onclick = ft_firstButt;
