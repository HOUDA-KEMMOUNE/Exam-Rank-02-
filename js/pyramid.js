let rows_count = 5;
let space = ' ';
let star = '*';
let i = 1;
let rows = [];
let r;

function pyramid(rows_count, i)
{
    let result;
    let space_repeat;
    let star_repeat;
    
    space_repeat = space.repeat(rows_count - i);
    star_repeat = star.repeat(i * 2 - 1);
    result = space_repeat + star_repeat + space_repeat;
    
    return result;
}

while (i <= rows_count)
{
    rows.push(pyramid(rows_count, i));
    i++;
}

for (const row of rows)
{
    console.log(row);
}