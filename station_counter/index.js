let count;
let result;

count = 0;
function increment() {
  console.log(count);
  count += 1;
  document.getElementById("count-el").innerText = count;
  return count;
}

function refresh() {
  count = 0;
  console.log(count);
  document.getElementById("count-el").innerText = count;
}
