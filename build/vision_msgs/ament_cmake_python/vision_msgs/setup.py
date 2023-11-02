from setuptools import find_packages
from setuptools import setup

setup(
    name='vision_msgs',
    version='4.1.0',
    packages=find_packages(
        include=('vision_msgs', 'vision_msgs.*')),
)
