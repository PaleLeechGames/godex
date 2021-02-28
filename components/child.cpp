#include "child.h"

void Child::_bind_methods() {
	// TODO don't expose to editor but allow fetch this from scripts.
	ECS_BIND_PROPERTY(Child, PropertyInfo(Variant::INT, "parent"), parent);
}

void Child::_get_storage_config(Dictionary &r_dictionary) {
	r_dictionary["pre_allocate"] = 1000;
}

Child::Child(EntityID p_parent) :
		parent(p_parent) {
}
