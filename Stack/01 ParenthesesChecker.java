import java.util.Scanner;
import java.util.Stack;

public class ParenthesesChecker {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in) ;

        while(sc.hasNext()) {

            Stack<String> characters = new Stack<>() ;
            String[] inputArray = sc.next().split("") ;

            boolean flag = true ;
            for (String s : inputArray) {

                switch (s) {

                    case "(":
                    case "{":
                    case "[":

                        characters.push(s);
                        break;
                    case ")":

                        if (!characters.empty()) {

                            if (!characters.peek().equals("(")) {
                                flag = false;
                            } else {
                                characters.pop();
                            }
                        } else {
                            flag = false ;
                        }
                        break;
                    case "}":

                        if (!characters.empty()) {

                            if (!characters.peek().equals("{")) {
                                flag = false;
                            } else {
                                characters.pop();
                            }
                        } else {
                            flag = false ;
                        }
                        break;
                    case "]":

                        if (!characters.empty()) {

                            if (!characters.peek().equals("[")) {
                                flag = false;
                            } else {
                                characters.pop();
                            }
                        } else {
                            flag = false ;
                        }
                        break;
                }
            }
            if(!characters.empty()) {
                flag = false ;
            }
            System.out.println(flag);
        }
    }
}
