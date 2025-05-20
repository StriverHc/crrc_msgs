from setuptools import find_packages
from setuptools import setup

setup(
    name='art_interface_msg',
    version='0.0.0',
    packages=find_packages(
        include=('art_interface_msg', 'art_interface_msg.*')),
)
