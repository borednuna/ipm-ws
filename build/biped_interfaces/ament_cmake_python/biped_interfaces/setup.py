from setuptools import find_packages
from setuptools import setup

setup(
    name='biped_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('biped_interfaces', 'biped_interfaces.*')),
)
