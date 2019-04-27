function initializeBase(derive,base,baseArgs){
	base.apply(derive,baseArgs);	
	for(prop in base.prototype){
		var proto = derive.constructor.prototype;
		if(!proto[prop]){
			proto[prop] = base.prototype[prop];
		}
	}
}

var Member = function(firstName,lastName){
	this.firstName = firstName;
	this.lastName = lastName;
};

Member.prototype.getName = function(){
	return this.lastName+" "+this.firstName;
};

//-----------------------------------------------------------

var specialMember = function(firstName,lastName,role){		//overriding
	initializeBase(this,Member,[firstName,lastName]);
	this.role = role;
}

specialMember.prototype.isAdministrator = function(){
	return (this.role == "Administrator");
};

var mem = new SpecialMember("Kang","DongGeun","Administrator");
document.writeln("name : " + mem.getName());
document.writeln("admin : " + mem.isAdministrator());
