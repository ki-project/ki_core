//File for communicating via the screen
//We are setting an link to the screen routines.

#include "../../routine/screen_routines.cpp"

int ~dp0screencomm (int out)
{
  output_screen(out);
  return 0;
}

int screencomm (int out)
{
  ~dp0screencomm(out);
  return 0;
}

uint32_t ~dp0comm_screen(int out)
{
  ~dp0screencomm(out);
  return 0;
}