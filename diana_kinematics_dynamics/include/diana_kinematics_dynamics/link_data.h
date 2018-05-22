/*
 * link_data.h
 *
 *  Created on: 2018. 2. 27.
 *      Author: Crowban
 */

#ifndef DIANA_KINEMATICS_DYNAMICS_LINK_DATA_H_
#define DIANA_KINEMATICS_DYNAMICS_LINK_DATA_H_

#define EIGEN_NO_DEBUG
#define EIGEN_NO_STATIC_ASSERT

#include "robotis_math/robotis_math.h"

namespace diana
{

class LinkData
{
public:

  LinkData();
  ~LinkData();

  std::string name_;

  int parent_;
  int sibling_;
  int child_;

  double mass_;

  Eigen::MatrixXd relative_position_;
  Eigen::MatrixXd joint_axis_;
  Eigen::MatrixXd center_of_mass_;
  Eigen::MatrixXd inertia_;
  Eigen::MatrixXd joint_center_of_mass_;

  double joint_limit_max_;
  double joint_limit_min_;

  double joint_angle_;
  double joint_velocity_;
  double joint_acceleration_;

  Eigen::MatrixXd position_;
  Eigen::MatrixXd orientation_;
  Eigen::MatrixXd transformation_;

};

}

#endif /* DIANA_KINEMATICS_DYNAMICS_LINK_DATA_H_ */
