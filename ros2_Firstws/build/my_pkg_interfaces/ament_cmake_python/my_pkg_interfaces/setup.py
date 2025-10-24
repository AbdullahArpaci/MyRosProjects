from setuptools import find_packages
from setuptools import setup

setup(
    name='my_pkg_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('my_pkg_interfaces', 'my_pkg_interfaces.*')),
)
