var Member = function(first,last){
	this.first = first;
	this.last = last;
}
Member.prototype={
	getName : function(){
		return this.last+" "+this.first;
	}
}
var mem = new Member("Kang","DongGeun");
document.writeln(mem.getName());
