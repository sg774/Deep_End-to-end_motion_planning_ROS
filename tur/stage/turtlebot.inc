define kinect ranger
(
  sensor
  (
    range_max 6.5
    fov 270.0
    samples 1080
  )
  # generic model properties
  color "black"
  size [ 0.06 0.015 0.03 ]
)

define turtlebot position
(
  pose [ 0.0 0.0 0.0 0.0 ]

  odom_error [0.03 0.03 0.03 0.03 0.03 0.02]

  size [ 0.2 0.2 0.35 ]
  origin [ 0.0 0.0 0.0 0.0 ]
  gui_nose 1
  drive "diff"
  color "gray"
  
  kinect(pose [ -0.1 0.0 -0.11 0.0 ])
)
