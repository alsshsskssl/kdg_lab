function people(){
	this.name;
	this.age;
	this.display = function(){
		document.writeln(this.name+" "+this.age);	
	}
	this.set_info = set_info;
}
function set_info(name,age){
	this.name = name;
	this.age = age;
}

var P = new people();
P.set_info("alsshsskssl",23);
P.display();
