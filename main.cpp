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
    
    // 1) accomodate fishes
    void accomodateFishes();
    // 2) inspire humans
    void inspireHumans();
    // 3) suck energy
    void suckEnergy();
};

struct Oven // 2)
{
    // 1) clean/dirty
    bool clean = false;
    // 2) used/unused
    bool used = false;
    // 3) temperature
    float temperatur = 180.0f;
    // 4) heating style
    int heatingStyle = 3;
    // 5) oven door open/closed
    bool ovenDoorOpen = false;
    
    // 1) heat up
    void heatUp();
    // 2) startTimer
    void startTimer();
    // 3) make Ping if food is ready for take off
    void foodReady();
};


struct Cat // 3)
{
    // 1) hairlength
    float hairLen = 0.3f;
    // 2) teethstyle
    int teethStyle;
    // 3) healthy or not
    bool healthy = true;
    // 4) age
    int age = 4;
    // 5) mood
    float mood = 0.5f;
    
    // 1) jump
    void jump();
    // 2) chill
    void chill();
    // 3) purrrrr
    void purrrr();
};

struct Cup // 4)
{
    // 1) color
    int color = 1;
    // 2) material
    int material = 0;
    // 3) size
    float size = 1.5f;
    // 4) dirty/clean
    bool dirty = false;
    // 5) weigth
    float weigth = 5.0f;
    
    // 1) stand
    void stand();
    // 2) break
    void breakCup();
    // 3) fallFromTable
    void fallFromTable();
};

struct AudioInterface // 5)
{
    // 1) on/off
    bool on = false;
    // 2) InputAmount
    int audioInputAmnt = 2;
    // 3) OutputAmount
    int audioOutputAmnt = 2;
    // 4) BufSize
    int bufSize = 512;
    // 5) ActiveConnections
    int activeConnections = 2;
    
    // NESTED CLASS 1 OF 2
    struct Audio
    {
        int bufSize = 256;
        double sampleRate = 44.1;
        
        void streamAudio(int bufSize = 512);
        Audio getSample();
    };
    
    // 1) recieve audio
    Audio recieveAudio(int bufSize = 512, double sampleRate = 44.1);
    // 2) send audio
    void sendAudio(Audio audio);
    // 3) route audio
    void routeAudio(Audio audio);
    
    Audio getAudio()
    {
        Audio audio;
        return audio;
    }
};


struct DrumPads // 6)
{
    // 1) padSize
    float padSize = 5.0f;
    // 2) triggerResponse
    float triggerResponse = 0.7f;
    // 3) ledBrightness
    float ledBrightness = 0.5f;
    // 4) activated/deactivated
    bool activated = true;
    // 5) playMode
    int playMode = 1;
    
    // 1) trigger sample with sensitive velocity
    void triggerSampler();
    // 2) mute track
    void muteTrack();
    // 3) select samplebank
    void selectSample();
};

struct ParamDials // 7)
{
    // 1) rangeScalerMin
    float rangeScalerMin = 0.1f;
    // 2) rangeScalerMax
    float rangeScalerMax = 0.9f;
    // 3) valueMapperTarget
    int valueMapperTarget = 3;
    // 4) activated/deactivated
    bool activated = false;
    // 5) recordMode on/off
    bool recordMode = false;
    
    
    // 1) control one param
    void ctrlOneParam();
    // 2) control two params at once
    void ctrlTwoParams();
    // 3) control two params at once with different scalings
    void ctrlTwoParamsDiffScalings();
};

struct MicrotonalPitcher // 8)
{
    // 1) on/off
    bool on = true;
    // 2) notesPerOctave
    int notesPerOctave = 100;
    // 3) dynamicPitchDeviationRange
    float dynamicPitchDeviationRange = 200.0f;
    // 4) maximumShiftingInterval
    float maximumShiftingInterval = 100;
    // 5) defaultFormantFilterDryWet
    float defaultFormantFilterDryWet = 0.0f;
    
    // 1) pitchAnalysis
    void pitchAnalysis();
    // 2) pitcShifting
    void pitchShifting();
    // 3) formantFiltering
    void formantFiltering();
};


struct TimeWarpFlexThing // 9)
{
    // 1) TransientDetectionThreshold
    float trasDetectTresh = 0.2f;
    // 2) maxWarpPoints
    int maxWarpPoints = 100;
    // 3) granularEngineVoiceAmnt
    int grainEngineVoiceAmnt = 8;
    // 4) InterpolationModeSelector
    int interpolModeSel = 0;
    // 5) SampleScopeSelector
    float sampleScopeSelector = 0.0f;
    
    // NESTED CLASS 2 OF 2
    struct Pattern
    {
        int patternLen = 5;
        float velocity = 100.0f;
        
        void permutatePatternOverLen(int patterLen = 17);
    };
    
    // 1) warpToEvenSpreadedSpectralEnergy
    void warpToEvenSpreadedSpectralEnergy(Pattern p);
    // 2) cluster
    void cluster(Pattern pattern);
    // 3) sliceSample
    void sliceSample(AudioInterface audioInterface)
    {
        AudioInterface::Audio sample = audioInterface.getAudio();
    }
};


struct  InsaneMusicMachine // 10)
{
    // 1) AudioInterface
    AudioInterface ioDevice;
    // 2) DrumPads
    DrumPads drumPads;
    // 3) ParamDials
    ParamDials paramDials;
    // 4) MicrotonalPitcher
    MicrotonalPitcher microtonalPitcher;
    // 5) TimeWarpFlexThing
    TimeWarpFlexThing timeWarper;
    
    // 1) play
    void play();
    // 2) stop
    void stop();
    // 3) suprise
    void suprise();
};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}

