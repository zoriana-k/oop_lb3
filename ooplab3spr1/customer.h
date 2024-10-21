class customer {
public:
    char name[128];
    project* associatedProject;
    manager* projectManager;  // асоціація

    customer() : associatedProject(nullptr), projectManager(nullptr) {}

    void associateProject(project* p) {
        associatedProject = p;
    }

    void assignManager(manager* m) {
        projectManager = m;
    }

    void printProjectInfo() {
        if (associatedProject) {
            std::cout << "Customer: " << name << std::endl;
            std::cout << "Associated project: " << associatedProject->name << std::endl;
            if (projectManager) {
                std::cout << "Manager: " << projectManager->name << std::endl;
            }
        }
    }
};
