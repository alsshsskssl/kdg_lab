var Member = function(firstName,lastName){
	this.firstName = firstName;
	this.lastName = lastName;
}

Member.prototype.getName = function(){
	return this.lastName+" "+this.firstName;
}

var mem = new Member("Kang","DongGeun");

document.writeln(mem.getName());

/*
var mem2 = new Member("Mun","Minseok");
document.writeln(mem2.getName());
//wrong code..
*/
