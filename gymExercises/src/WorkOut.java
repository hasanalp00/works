import java.util.Arrays;
import java.util.HashMap;
import java.util.Objects;

public class WorkOut{

    private final String workOut;
    private boolean workOutEntered=false;
    private final HashMap<String,String[]> workoutScheme =new HashMap<>(4);

    private static final String[] chestDayExercises={"Bench Press","Incline Bench Press","Dumbell Fly",
            "Skull Crusher","Rope Push Down"};
    private static final String[] backDayExercises={"Lat Pull Down","Cable Row","Neutral Pull Down",
            "Barbell Biceps Curl","Dumbell Hammer Curl"};
    private static final String[] shoulderDayExercises={"Shoulder Press","Lateral Raise",
            "Rear Deltoid Raise"};
    private static final String[] legDayExercises={"Barbell Squat","Bulgarian Split Squat","Leg Extension",
            "Leg Curl"};

    public WorkOut(String workOut){
        this.workOut=workOut;
        startWorkOut();
    }

    private void startWorkOut() throws RuntimeException{
        workoutScheme.put("chest",chestDayExercises);
        workoutScheme.put("back",backDayExercises);
        workoutScheme.put("shoulders",shoulderDayExercises);
        workoutScheme.put("legs",legDayExercises);
        try {
            for (String workDay : workoutScheme.keySet()) {
                if (workDay.equalsIgnoreCase(this.workOut)) {
                    workOutEntered=true;
                    System.out.println("It is time to destroy your " + getWorkOut());
                    System.out.print("You can use this training\n"+Arrays.toString(workoutScheme.get(workDay)));
                    break;
                }
            }
            if(!workOutEntered){
                throw new RuntimeException("--Please enter one of above--");
            }
            //throw new RuntimeException(c==0 ? "--Please enter one of above--": null);
            //It could be beautiful, but the Exception line doesn't look good.
        } catch (RuntimeException e) {
            System.out.println(e.getLocalizedMessage());
        }catch (Exception e) {
            System.out.println("invalid input");
        }
    }

    public String getWorkOut() {
        if(workOutEntered) {
            return this.workOut.toUpperCase();
        }else{
            return "WORK OUT NAME IS NOT ENTERED";
        }
    }

    public static void getChestDayExercises() {
        System.out.print("Chest Day Exercises:");
        for(String chestExercise : chestDayExercises){
            System.out.print(" "+chestExercise+" /");
        }
        System.out.print("\n\n");
    }

    public static void getBackDayExercises() {
        System.out.print("Back Day Exercises:");
        for (String backExercise : backDayExercises) {
            System.out.print(" " + backExercise + " /");
        }
        System.out.print("\n\n");
    }

    public static void getShoulderDayExercises() {
        System.out.print("Shoulder Day Exercises:");
        for(String shoulderExercise : shoulderDayExercises){
            System.out.print(" "+shoulderExercise+" /");
        }
        System.out.print("\n\n");
    }

    public static void getLegDayExercises() {
        System.out.print("Leg Day Exercises:");
        for (String legExercise : legDayExercises) {
            System.out.print(" " + legExercise + " /");
        }
        System.out.print("\n\n");
    }

    @Override
    public int hashCode() {
        return Objects.hash(workOut, workOutEntered, workoutScheme);
    }

}

