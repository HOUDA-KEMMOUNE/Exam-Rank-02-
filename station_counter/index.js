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

count = 0;
count_el = document.getElementById("count_el");
text1 = document.getElementById("text1");
text2 = document.getElementById("text2");
text3 = document.getElementById("text3");
button1 = document.getElementById("button1");
button2 = document.getElementById("button2");
button3 = document.getElementById("button3");
done = document.getElementById("done");
refresh = document.getElementById("refresh");

function ft_firstButt() {
  count_el.innerText = count;
  count++;
  return count;
}
butt1_ret = ft_firstButt();

function ft_secondButt() {
  count_el.innerText = count;
  count++;
  return count;
}
butt2_ret = ft_secondButt();

function ft_thirdButt() {
  count_el.innerText = count;
  count++;
  return count;
}
butt3_ret = ft_thirdButt();

function ft_doneButt() {
  ft_refreshButt();
  text1.innerText += butt1_ret + " سبحان اللّه";
  text2.innerText += butt2_ret + " اللّه أكبر";
  text3.innerText += butt3_ret + " لا إله إلا اللّه";
}

function ft_refreshButt() {
  count = 0;
  count_el.innerText = count;
  console.log(count);
  text1.innerText = "You done:";
  text2.innerText = "You done:";
  text3.innerText = "You done:";
}

refresh.onclick = ft_refreshButt;
button1.onclick = ft_firstButt;
button2.onclick = ft_secondButt;
button3.onclick = ft_thirdButt;
button1.onclick = ft_firstButt;
done.onclick = ft_doneButt;
