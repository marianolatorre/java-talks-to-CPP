
class Greeting {

    private native String greet();
    public Greeting() { System.load("/Users/marianolatorre/Desktop/javatest/build/libjnitests.dylib"); }

    public String greetMe() { return greet(); }

    public static void main(String[] args) {
        Greeting greeting = new Greeting();
        System.out.println(greeting.greetMe());
    }
}
