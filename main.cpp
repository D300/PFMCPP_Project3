/*
Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to reinforce the syntax habits that C++ requires.  What you create in this project will be used as the basis of Project 5 in the course.   

1) write 10 user-defined types in plain english
   - This step will involve several checkpoints before it is complete.

Checkpoint 1:
    Fill in #1 - 4 with a random UDT in plain english
    These 4 UDTs do not need to be related.
    For each plain-english UDT, write out 3 things it can do, and 5 traits or properties.

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding to the next Checkpoint
************************

Checkpoint 2:
    For the 10th UDT, come up with an object that is made of 5 smaller parts.
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding to the next Checkpoint
************************

Checkpoint 3: 

    Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, until the smallest object is made of up only C++ primitives. 

    These 5 things can be broken down into their own sub-objects and properties. 

    For example: Display
    A Display has the following 5 traits or properties:
        pixels
        amount of power consumed.
        brightness.
        width
        height

    the Display's brightness can be represented with a Primitive, such as a double. 
    The amount of power consumed can also be represented with a Primitive.
    The 'pixels' must be represented with an array of Pixel instances.  Arrays have not been discussed and can't be used in this project.
    Instead, we can use an Integer primitive to describe the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed
        Brightness

    Notice that I did not write "has a display" or "Has memory" or "has a cpu"  
    Writing 'has a ___" checks whether or not your object *has the ability to do something*.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    In C++ terms, this means to I want you to avoid bool (has a) as a member variable type.
    Instead, prefer the other primitive types when you get to step 2)

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding with step 2.
************************
  
 2) define your struct for each of your 10 types. 
    - Copy your 3 actions & 5 traits into your struct body.
    - comment them out.
    - I recommend compiling after finishing each one and making sure it compiles without errors or warnings before moving on to writing the next UDT.
 
 3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 done

 4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions in part2 for these functions
    - you'll call each of these functions in part3
 done

 5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs at least 2 member functions.
    - these nested classes are not considered one of your 10 UDTs.
 
 6) your 10th UDTs should only use 5 of your other UDTs for its member variable types.   
    - No primitives allowed!
 
 7) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:  

//1) write out, in plain-english, 5 traits and 3 things it can do.
Car Wash   
5 properties:
    1) vacuum cleaners
    2) eco-friendly cleaning supplies
    3) stores the amount of water used per week.
    4) stores amount of profit made per week
    5) number of cars serviced per day

3 things it can do:
    1) wash and wax car
    2) charge customer
    3) detail the car interior
 */

#include <stdio.h>

struct CarWash //2)        
{
    //2) has vacuum cleaners
    int numVacuumCleaners = 3; //3) member variables with relevant data types.
    //2) has eco-friendly cleaning supplies
    int numEcoFriendlyCleaningSupplies = 20; //3) member variables with relevant data types.
    //2) stores the amount of water used per week.
    float waterUsedPerWeek = 200.f; //3) member variables with relevant data types.
    //2) stores amount of profit made per week
    float profitPerWeek = 495.95f; //3) member variables with relevant data types.
    //2) number of cars serviced per day
    int numberOfCarsServiced = 10; //3) member variables with relevant data types.
    
    //5) make 2 of the 10 user-defined types have a nested class. 
    struct Car   
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);   
    };

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) wash and wax car
    void washAndWaxCar( Car car );
    //2) charge customer
    float chargeCustomer();
    //2) detail the car interior
    void detailInterior( Car car );
    
               
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};

/*
Checkpoint 1:
    Fill in #1 - 4 with a random UDT in plain english
    These 4 UDTs do not need to be related.
    For each plain-english UDT, write out 3 things it can do, and 5 traits or properties.
*/


// 1) Aquarium 
struct Aquarium
{
// 5 properties:
    // 1) size
    int size = 40;
    // 2) water filters
    int waterFilters = 1;
    //3) plant types
    int plantTypes = 3;
    // 4) glass thickness
    float glassThickness = 0.8f;
    // 5) light
    bool light = true;

// 3 things it can do:
    // 1) accomodate fishes
    void accomodateFishes();
    // 2) inspire humans
    void inspireHumans();
    // 3) suck energy
    void suckEnergy();
};

struct Oven
{
    bool clean = false;
    bool used = false;
    float temperatur = 180.0f;
    int heatingStyle = 3;
    bool ovenDoorOpen = false;

    void heatUp();
    void startTimer();
    void foodReady();
};

/*
2) Oven
5 properties:
    1) clean/dirty
    2) used/unused
    3) temperature
    4) heating style
    5) oven door open/closed
3 things it can do:
    1) heat up
    2) startTimer
    3) make Ping if food is ready for take off
 */

struct Cat
{
    float hairLen = 0.3f;
    int teethStyle;
    bool healthy = true;
    int age = 4;
    float mood = 0.5f;

    void jump();
    void chill();
    void purrrr();
};

/*
3) Cat
5 properties:
    1) hairlength
    2) teethstyle
    3) healthy or not
    4) age
    5) mood
3 things it can do:
    1) jump
    2) chill
    3) purrrrr
 */

struct Cup
{
    int color = 1;
    int material = 0;
    float size = 1.5f;
    bool dirty = false;
    float weigth = 5.0f;

    void stand();
    void breakCup();
    void fallFromTable();
};

/*
4) Cup
5 properties:
    1) color
    2) material
    3) size
    4) dirty/clean
    5) weigth
3 things it can do:
    1) stand
    2) break
    3) fallFromTable
 */

struct AudioInterface
{
    bool on = false;
    int audioInputAmnt = 2;
    int audioOutputAmnt = 2;
    int bufSize = 512;
    int activeConnections = 2;

    // buffer<float>& someAudioStream is now just symbolic... 
    struct Audio
    {
        int bufSize = 256;
        double sampleRate = 44.1;

        void streamAudio(int bufSize = 512);
        Audio getSample();
    };

    Audio recieveAudio(int bufSize = 512, double sampleRate = 44.1);
    void sendAudio(Audio audio);
    void routeAudio(Audio audio);

    Audio getAudio()
    {
        Audio audio;
        return audio;
    }
};

/*
5) AudioInterface
5 properties:
    1) on/off
    2) InputAmount
    3) OutputAmount
    4) BufSize
    5) ActiveConnections
3 things it can do:
    1) recieve audio
    2) send audio
    3) route audio
 */

struct DrumPads
{
    float padSize = 5.0f;
    float triggerResponse = 0.7f;
    float ledBrightness = 0.5f;
    bool activated = true;
    int playMode = 1;

    void triggerSampler();
    void muteTrack();
    void selectSample();
};

/*
6) DrumPads
5 properties:
    1) padSize
    2) triggerResponse
    3) ledBrightness
    4) activated/deactivated
    5) playMode
3 things it can do:
    1) trigger sample with sensitive velocity
    2) mute track
    3) select samplebank
 */

struct ParamDials
{
    float rangeScalerMin = 0.1f;
    float rangeScalerMax = 0.9f;
    int valueMapperTarget = 3;
    bool activated = false;
    bool recordMode = false;

    void ctrlOneParam();
    void ctrlTwoParams();
    void ctrlTwoParamsDiffScalings();
};

/*
nest a class here

7) ParamDials
5 properties:
    1) rangeScalerMin
    2) rangeScalerMax
    3) valueMapperTarget
    4) activated/deactivated
    5) recordMode on/off
3 things it can do:
    1) control one param
    2) control two params at once
    3) control two params at once with different scalings
 */

struct MicrotonalPitcher
{
    bool on = true;
    int notesPerOctave = 100;
    float dynamicPitchDeviationRange = 200.0f;
    float maximumShiftingInterval = 100;
    float defaultFormantFilterDryWet = 0.0f;

    void pitchAnalysis();
    void pitchShifting();
    void formantFiltering();
};
/*
8) MicrotonalPitcher
5 properties:
    1) on/off
    2) notesPerOctave
    3) dynamicPitchDeviationRange
    4) maximumShiftingInterval
    5) defaultFormantFilterDryWet
3 things it can do:
    1) pitchAnalysis
    2) pitcShifting
    3) formantFiltering
 */

struct TimeWarpFlexThing
{
    float trasDetectTresh = 0.2f;
    int maxWarpPoints = 100;
    int grainEngineVoiceAmnt = 8;
    int interpolModeSel = 0;
    float sampleScopeSelector = 0.0f;

    struct Pattern
    {
        int patternLen = 5;
        float velocity = 100.0f;

        void permutatePatternOverLen(int patterLen = 17);
    };

    void warpToEvenSpreadedSpectralEnergy(Pattern p);
    void cluster(Pattern pattern);
    void sliceSample(AudioInterface audioInterface)
    {
        AudioInterface::Audio sample = audioInterface.getAudio();
    }
};
/*
9) TimeWarpFlexThing
nest a class here

5 properties:
    1) TransientDetectionThreshold
    2) maxWarpPoints
    3) granularEngineVoiceAmnt
    4) InterpolationModeSelector
    5) SampleScopeSelector
3 things it can do:
    1) warpToEvenSpreadedSpectralEnergy
    2) cluster
    3) sliceSample
 */

/*
your 10th UDTs should only use 5 of your other UDTs for its member variable types.   
    - No primitives allowed!
*/

struct  InsaneMusicMachine
{
    AudioInterface ioDevice;
    DrumPads drumPads;
    ParamDials paramDials;
    MicrotonalPitcher microtonalPitcher;
    TimeWarpFlexThing timeWarper;

    void play();
    void stop();
    void suprise();
};

/*
10) InsaneMusicMachine
5 properties:
    1) AudioInterface
    2) DrumPads
    3) ParamDials
    4) MicrotonalPitcher
    5) TimeWarpFlexThing
3 things it can do:
    1) play
    2) stop
    3) suprise
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
