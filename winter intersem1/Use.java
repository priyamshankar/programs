// import java.lang.Exception;
// class person {
//     String name;
//     int age;
//     String male;
//     String height;
//     int weight;

//     person(String name,
//             int age,
//             String male,
//             String height,
//             int weight) {
//         this.name = name;
//         this.age = age;
//         this.male = male;
//         this.height = height;
//         this.weight = weight;
//     }
// }

// class student extends person {
//     int year;
//     float gpa;
//     boolean passingStatus;
//     int rank;

//     student (int year, float gpa, boolean passingStatus,int rank){
//         this.year=year;
//         this.gpa=gpa;
//         this.passingStatus=passingStatus;
//         this.rank=rank;

//     }

//     validate(gpa); //exception
// }
// class invalidGpaException extends Exception{
//     public invalidGpaException (float gpa){
//         super(gpa);
//     }
// }

// public class customException{


// static void validate (Float gpa) throws InvalidAgeException{    
//     if(gpa >10|| gpa<0 ){  

    
//      throw new invalidGpaException("gpa is not valid");    
//  }  

// }
// public class Use{
//     public static void main(String[] args) {

        
        
//     }
// } 