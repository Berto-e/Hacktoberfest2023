/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function (s) {
  let romantoIntValue = 0;
  const romanLetters = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000,
  };

  for (let i = 0; i < s.length; ++i)
    switch (s[i]) {
      case "I":
        if (s[i + 1] === "V") {
          romantoIntValue += 4;
          ++i;
        } else if (s[i + 1] === "X") {
          romantoIntValue += 9;
          ++i;
        } else {
          romantoIntValue += romanLetters[s[i]];
        }
        break;
      case "X":
        if (s[i + 1] === "L") {
          romantoIntValue += 40;
          ++i;
        } else if (s[i + 1] == "C") {
          romantoIntValue += 90;
          ++i;
        } else {
          romantoIntValue += romanLetters[s[i]];
        }
        break;
      case "C":
        if (s[i + 1] === "D") {
          romantoIntValue += 400;
          ++i;
        } else if (s[i + 1] === "M") {
          romantoIntValue += 900;
          ++i;
        } else {
          romantoIntValue += romanLetters[s[i]];
        }
        break;
      default: romantoIntValue+= romanLetters[s[i]];
    }

    console.log(romantoIntValue);
};

const s = "IV";
romanToInt(s);
