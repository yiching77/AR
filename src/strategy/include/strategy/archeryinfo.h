#define Robotbodyheight 50
#define RobotVisionWidth 320    //55度
#define RobotVisionHeight 240 //40度
#define ImgHorizontalAngle 55.0
#define ImgVerticalAngle 40.0
#define HalfImgWidth RobotVisionWidth/2
#define HalfImgHeight RobotVisionHeight/2
#define MotorMoveOneDegree 3.4133333333333333333333333333333
#define TraceDegreePercent 0.3
#define Whiteline_color 6
#define Target_red_color 5
#define Target_yellow_color 1
#define Target_blue_color 2
#define TurnLeft 1
#define TurnRight 0
enum{Initialization,
     find_target,
     find_target_mode,
     find_Target_y,
     start_timer,
     Trace_waist,
     find_period,
     Shoot,
     End,
     find_target_mode_old};

enum{find_target_lowest,
     find_target_highest};
// enum Robot_Shoot_Position
// {
//   InLeft,
//   InCenter,
//   InRight   `1
// };

class archeryinfo
{
public:
    
struct objectdata2
{
   int XMax, XMin, YMax, YMin;
   int X;
   int Y;
   int Width;
   int Height;
   int size;
 };    
objectdata2 RedTarget;
objectdata2 YellowTarget;
objectdata2 BlueTarget;
objectdata2 white_line;

void Initialization_function();
int HeadTurnSide;
int HeadTurnPosition;
int WaistTurnPosition;
int VerticalHeadPosition;
int HorizontalHeadPosition;
int Robot_state;
int Find_y_state;
int NewpullHorizontalMaxAngle;
int NewpullHorizontalMinAngle;



};extern archeryinfo *Archeryinfo;
