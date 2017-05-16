#ifndef PID_H
#define PID_H

class PID {
public:
  /*
  * Errors
  */
  double error;

  /*
  * Coefficients
  */
  double Kp_;
  double Ki_;
  double Kd_;

  double diff_cte;
  double prev_cte;
  double int_cte;

  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Calculate the steering control given the cross track error.
  */
  double Control(double cte);

  /*
  * Calculate the total PID error.
  */
  double TotalError();
};

#endif /* PID_H */
