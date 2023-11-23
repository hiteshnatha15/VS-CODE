// Parent class with protected and private members
class Parent {
    public int publicField = 10;
    protected int protectedField = 20;
    private int privateField = 30;

    public void publicMethod() 
    {
        System.out.println("This is a public method in Parent class.");
    }

    protected void protectedMethod() 
    {
        System.out.println("This is a protected method in Parent class.");
    }

    private void privateMethod() 
    {
        System.out.println("This is a private method in Parent class.");
    }
}

// Child class inheriting from Parent
class Child extends Parent 
{
    public void accessProtectedMember() 
    {
        System.out.println("Accessing protectedField from Child: " + protectedField);
        protectedMethod();
    }
    public void accessPrivateMember() 
    {
        System.out.println("Accessing publicField from Child: " + publicField);
        publicMethod();
    }
}

public class inheritance
 {
    public static void main(String[] args) 
    {
        Child childObj = new Child();

        // Accessing public members and methods from the child object
        System.out.println("Accessing publicField from Child: " + childObj.publicField);
        childObj.publicMethod();

        // Accessing protected members and methods from the child object
        System.out.println("Accessing protectedField from Child: " + childObj.protectedField);
        childObj.accessProtectedMember();

        // Private members and methods are not accessible from Child
        // System.out.println("Accessing privateField from Child: " + childObj.privateField); // Error
        // childObj.privateMethod(); // Error
    }
}
