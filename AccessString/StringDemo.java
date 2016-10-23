class StringDemo{
	private native String getLine(String prompt);
	public static void main(String args[]){
		StringDemo p = new StringDemo();
		String input = p.getLine("Type a line: ");
		System.out.println("User typed: " + input);
	}

	static {
		System.loadLibrary("StringDemo");
	}
}
