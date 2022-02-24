#include <gazebo/gazebo.hh>


namespace gazebo{


	class RobotWorldPlugin : public WorldPlugin
	{
		public: RobotWorldPlugin() : WorldPlugin()
		{

		   printf("Welcome to 's World n/");
		}

		public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
		{
		}
	
	};
	GZ_REGISTER_WORLD_PLUGIN(RobotWorldPlugin)
}
