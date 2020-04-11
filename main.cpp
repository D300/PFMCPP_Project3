 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   - you should be left with only your UDTs.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

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
    
    // 1) receive audio
    Audio receiveAudio(int bufSize = 512, double sampleRate = 44.1);
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
    float transDetectTresh = 0.2f;
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
    auto sliceSample(AudioInterface audioInterface)
    {
        auto sample = audioInterface.getAudio();
        return sample;
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

