# CMake generated Testfile for 
# Source directory: /home/nishq/spot-ws/src/geometry2/tf2_sensor_msgs
# Build directory: /home/nishq/spot-ws/build/geometry2/tf2_sensor_msgs
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_tf2_sensor_msgs_nosetests_test.test_tf2_sensor_msgs.py "/home/nishq/spot-ws/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/nishq/spot-ws/build/test_results/tf2_sensor_msgs/nosetests-test.test_tf2_sensor_msgs.py.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/nishq/spot-ws/build/test_results/tf2_sensor_msgs" "/usr/bin/nosetests -P --process-timeout=60 /home/nishq/spot-ws/src/geometry2/tf2_sensor_msgs/test/test_tf2_sensor_msgs.py --with-xunit --xunit-file=/home/nishq/spot-ws/build/test_results/tf2_sensor_msgs/nosetests-test.test_tf2_sensor_msgs.py.xml")
add_test(_ctest_tf2_sensor_msgs_rostest_test_test.launch "/home/nishq/spot-ws/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/nishq/spot-ws/build/test_results/tf2_sensor_msgs/rostest-test_test.xml" "--return-code" "/usr/bin/python3 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/nishq/spot-ws/src/geometry2/tf2_sensor_msgs --package=tf2_sensor_msgs --results-filename test_test.xml --results-base-dir \"/home/nishq/spot-ws/build/test_results\" /home/nishq/spot-ws/src/geometry2/tf2_sensor_msgs/test/test.launch ")
