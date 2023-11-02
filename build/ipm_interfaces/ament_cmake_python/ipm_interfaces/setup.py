from setuptools import find_packages
from setuptools import setup

setup(
    name='ipm_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('ipm_interfaces', 'ipm_interfaces.*')),
)
