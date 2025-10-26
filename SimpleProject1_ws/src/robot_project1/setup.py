from setuptools import find_packages, setup

package_name = 'robot_project1'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='abdullah',
    maintainer_email='arpaciabdullah5151@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            "my_robot = robot_project1.robot_controller:main",
            "obstacleServer = robot_project1.obstacle_sensor:main"
        ],
    },
)
