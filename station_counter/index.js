let count;
let result;
let count_el;

count = 0;
count_el = document.getElementById("count-el");
function increment() {
  console.log(count);
  count += 1;
  count_el.innerText = count;
  return count;
}

function refresh() {
  count = 0;
  console.log(count);
  count_el.innerText = count;
}
