from setuptools import find_packages, setup

package_name = 'my_pkg'

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
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
        "my_node = my_pkg.my_node_sample:main",
        "my_talker = my_pkg.talker:main",
        "my_speaker = my_pkg.speaker:main",
        "my_service = my_pkg.service:main",
        "my_client = my_pkg.client:main",
        ],
    },
)
