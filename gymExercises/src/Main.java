import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        WorkOut.getChestDayExercises();
        WorkOut.getBackDayExercises();
        WorkOut.getShoulderDayExercises();
        WorkOut.getLegDayExercises();
        System.out.println("This is a simple exercise program");
        System.out.println("-| chest | back | shoulders | legs |-");
        Scanner scanWorkOut=new Scanner(System.in);
        System.out.print("Select one of split training to work out today: ");
        String workOut=scanWorkOut.nextLine();

        WorkOut w1 = new WorkOut(workOut);



    }
}

