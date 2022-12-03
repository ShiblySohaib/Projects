import java.util.Scanner;

public class Password {
    private String password = "1234";

    Scanner input = new Scanner(System.in);

    public String getPassword() {
        return password;
    }

    public void setPassword(String pass1) {
        this.password = pass1;
    }
}
