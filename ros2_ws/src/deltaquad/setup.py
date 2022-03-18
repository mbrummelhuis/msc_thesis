from setuptools import setup

package_name = 'deltaquad'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mbrummelhuis',
    maintainer_email='mbrummelhuis@gmail.com',
    description='Quadrotor endowed with delta robot-based manipulator using parallel force/motion control scheme for aerial physical interaction.',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
