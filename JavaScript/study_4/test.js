/*
var Member = function(firstName,lastName){
	this.firstName = firstName;
	this.lastName = lastName;
	this.getName = function(){
		document.writeln(this.firstName+" "+this.lastName);
		//return this.lastName + " " + this.firstName;
	}
};

var mem = new Member("Kang","DongGeun");
mem.getName();
//document.writeln(mem.getName());
*/





var name_info = function(first,last){
	this.first = first;
	this.last = last;
	this.display = function(){
		document.writeln(this.first+" "+this.last);
	}
};

var n = new name_info("kang","donggeun");

n.display();

