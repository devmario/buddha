var Observable = require("FuseJS/Observable");
var menuItem = Observable();

var menuData = [
    {
		text:"도움말"
    },
    {
		text:"설정"
    },
    {
		text:"기록보기"
    },
    {
		text:"시작"
    }
];

menuData.reverse();
while(data = menuData.pop()) {
    menuItem.add(data);
}

function mainMenuClick(arg) {
    debug_log(arg.data.text);
}

module.exports = {
    menuItem: menuItem,
    mainMenuClick: mainMenuClick
};
