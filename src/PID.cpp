#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  Kp_ = Kp;
  Ki_ = Ki;
  Kd_ = Kd;

  error = 0.0;
}

double PID::Control(double cte) {
  error += cte;

  diff_cte = cte - prev_cte;
  prev_cte = cte;
  int_cte += cte;

  return -Kp_ * cte - Kd_ * diff_cte - Ki_ * int_cte;
}

double PID::TotalError() {
  return error;
}

