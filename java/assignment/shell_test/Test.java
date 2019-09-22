public class Test{
	public static void main(String[] args){
		Cmd cmd = new Cmd();

		String command = cmd.inputCommand("ifconfig");
		String result = cmd.execCommand(command);

		System.out.println(result);
	}
}
