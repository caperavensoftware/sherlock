export const imageTypes = {
    0: "rectangle",
    1: "triangle",
    2: "circle",
    3: "heart",
    4: "diamond",
    5: "gear"
}

export const columnType = {
    0: "col0",
    1: "col1",
    2: "col2",
    3: "col3",
    4: "col4",
    5: "col5"
}

export const svgMarkup = 
`
<svg class="__column__">
    <use xlink:href="#__row__"></use>
</svg>
`;

export function getImage (row, column) {
    let result = svgMarkup.slice(0);
    result.split("__column__").join(columnType[column]);
    result.split("__row__").join(imageTypes[row]);
    return result;
}