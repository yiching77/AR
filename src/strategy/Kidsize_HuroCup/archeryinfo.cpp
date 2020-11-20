#include "strategy/archeryinfo.h"

archeryinfo * Archeryinfo = new archeryinfo();

void archeryinfo::Initialization_function()//初始化設定
{
    Archeryinfo->HeadTurnSide = TurnRight;
    Archeryinfo->HeadTurnPosition = 20;//轉頭一次的角度
    Archeryinfo->WaistTurnPosition = 20;//轉腰一次的角度 腰跟頭的角度是1:1
    Archeryinfo->Robot_state = Initialization;//初始狀態
    Archeryinfo->Find_y_state = find_target_lowest;
    Archeryinfo->HorizontalHeadPosition = 2811;//水平將頭擺到正對靶的角度
    Archeryinfo->VerticalHeadPosition = 2048;//垂直在中間角度
    Archeryinfo->NewpullHorizontalMaxAngle = 3400;//轉頭向右的極限值
    Archeryinfo->NewpullHorizontalMinAngle = 2745;//轉頭向左的極限值

}

