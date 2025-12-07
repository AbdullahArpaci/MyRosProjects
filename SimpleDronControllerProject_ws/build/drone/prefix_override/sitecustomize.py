import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/abdullah/Desktop/MyRosProjects/SimpleDronControllerProject_ws/install/drone'
