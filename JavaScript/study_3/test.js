
function base(num){
	var cnt = num;
	return function(){
		return cnt++;
	};
}
var b = base(1);

document.writeln(b());
document.writeln(b());
document.writeln(b());

/*
function closure(init){
	var counter = init;

	return function(){
		return counter++;
	}
}

var myClosure = closure(1);

document.writeln(myClosure());
document.writeln(myClosure());
document.writeln(myClosure());
document.writeln(myClosure());
*/
