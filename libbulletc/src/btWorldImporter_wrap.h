#include "main.h"

#ifdef __cplusplus
extern "C" {
#endif
	EXPORT btWorldImporter* btWorldImporter_new(btDynamicsWorld* world);
	EXPORT btCollisionShape* btWorldImporter_createBoxShape(btWorldImporter* obj, const btVector3* halfExtents);
	EXPORT btBvhTriangleMeshShape* btWorldImporter_createBvhTriangleMeshShape(btWorldImporter* obj, btStridingMeshInterface* trimesh, btOptimizedBvh* bvh);
	EXPORT btCollisionShape* btWorldImporter_createCapsuleShapeZ(btWorldImporter* obj, btScalar radius, btScalar height);
	EXPORT btCollisionShape* btWorldImporter_createCapsuleShapeX(btWorldImporter* obj, btScalar radius, btScalar height);
	EXPORT btCollisionShape* btWorldImporter_createCapsuleShapeY(btWorldImporter* obj, btScalar radius, btScalar height);
	EXPORT btCollisionObject* btWorldImporter_createCollisionObject(btWorldImporter* obj, const btTransform* startTransform, btCollisionShape* shape, const char* bodyName);
	EXPORT btCompoundShape* btWorldImporter_createCompoundShape(btWorldImporter* obj);
	EXPORT btCollisionShape* btWorldImporter_createConeShapeZ(btWorldImporter* obj, btScalar radius, btScalar height);
	EXPORT btCollisionShape* btWorldImporter_createConeShapeX(btWorldImporter* obj, btScalar radius, btScalar height);
	EXPORT btCollisionShape* btWorldImporter_createConeShapeY(btWorldImporter* obj, btScalar radius, btScalar height);
	EXPORT btConeTwistConstraint* btWorldImporter_createConeTwistConstraint(btWorldImporter* obj, btRigidBody* rbA, btRigidBody* rbB, const btTransform* rbAFrame, const btTransform* rbBFrame);
	EXPORT btConeTwistConstraint* btWorldImporter_createConeTwistConstraint2(btWorldImporter* obj, btRigidBody* rbA, const btTransform* rbAFrame);
	EXPORT btConvexHullShape* btWorldImporter_createConvexHullShape(btWorldImporter* obj);
	EXPORT btCollisionShape* btWorldImporter_createConvexTriangleMeshShape(btWorldImporter* obj, btStridingMeshInterface* trimesh);
	EXPORT btCollisionShape* btWorldImporter_createCylinderShapeZ(btWorldImporter* obj, btScalar radius, btScalar height);
	EXPORT btCollisionShape* btWorldImporter_createCylinderShapeX(btWorldImporter* obj, btScalar radius, btScalar height);
	EXPORT btCollisionShape* btWorldImporter_createCylinderShapeY(btWorldImporter* obj, btScalar radius, btScalar height);
	EXPORT btGearConstraint* btWorldImporter_createGearConstraint(btWorldImporter* obj, btRigidBody* rbA, btRigidBody* rbB, const btVector3* axisInA, const btVector3* axisInB, btScalar ratio);
	EXPORT btGeneric6DofConstraint* btWorldImporter_createGeneric6DofConstraint(btWorldImporter* obj, btRigidBody* rbA, btRigidBody* rbB, const btTransform* frameInA, const btTransform* frameInB, bool useLinearReferenceFrameA);
	EXPORT btGeneric6DofConstraint* btWorldImporter_createGeneric6DofConstraint2(btWorldImporter* obj, btRigidBody* rbB, const btTransform* frameInB, bool useLinearReferenceFrameB);
	EXPORT btGeneric6DofSpring2Constraint* btWorldImporter_createGeneric6DofSpring2Constraint(btWorldImporter* obj, btRigidBody* rbA, btRigidBody* rbB, const btTransform* frameInA, const btTransform* frameInB, int rotateOrder);
	EXPORT btGeneric6DofSpringConstraint* btWorldImporter_createGeneric6DofSpringConstraint(btWorldImporter* obj, btRigidBody* rbA, btRigidBody* rbB, const btTransform* frameInA, const btTransform* frameInB, bool useLinearReferenceFrameA);
	EXPORT btGImpactMeshShape* btWorldImporter_createGimpactShape(btWorldImporter* obj, btStridingMeshInterface* trimesh);
	EXPORT btHingeConstraint* btWorldImporter_createHingeConstraint(btWorldImporter* obj, btRigidBody* rbA, btRigidBody* rbB, const btTransform* rbAFrame, const btTransform* rbBFrame);
	EXPORT btHingeConstraint* btWorldImporter_createHingeConstraint2(btWorldImporter* obj, btRigidBody* rbA, btRigidBody* rbB, const btTransform* rbAFrame, const btTransform* rbBFrame, bool useReferenceFrameA);
	EXPORT btHingeConstraint* btWorldImporter_createHingeConstraint3(btWorldImporter* obj, btRigidBody* rbA, const btTransform* rbAFrame);
	EXPORT btHingeConstraint* btWorldImporter_createHingeConstraint4(btWorldImporter* obj, btRigidBody* rbA, const btTransform* rbAFrame, bool useReferenceFrameA);
	EXPORT btTriangleIndexVertexArray* btWorldImporter_createMeshInterface(btWorldImporter* obj, btStridingMeshInterfaceData* meshData);
	EXPORT btMultiSphereShape* btWorldImporter_createMultiSphereShape(btWorldImporter* obj, const btVector3* positions, const btScalar* radi, int numSpheres);
	EXPORT btOptimizedBvh* btWorldImporter_createOptimizedBvh(btWorldImporter* obj);
	EXPORT btCollisionShape* btWorldImporter_createPlaneShape(btWorldImporter* obj, const btVector3* planeNormal, btScalar planeConstant);
	EXPORT btPoint2PointConstraint* btWorldImporter_createPoint2PointConstraint(btWorldImporter* obj, btRigidBody* rbA, const btVector3* pivotInA);
	EXPORT btPoint2PointConstraint* btWorldImporter_createPoint2PointConstraint2(btWorldImporter* obj, btRigidBody* rbA, btRigidBody* rbB, const btVector3* pivotInA, const btVector3* pivotInB);
	EXPORT btRigidBody* btWorldImporter_createRigidBody(btWorldImporter* obj, bool isDynamic, btScalar mass, const btTransform* startTransform, btCollisionShape* shape, const char* bodyName);
	EXPORT btScaledBvhTriangleMeshShape* btWorldImporter_createScaledTrangleMeshShape(btWorldImporter* obj, btBvhTriangleMeshShape* meshShape, const btVector3* localScalingbtBvhTriangleMeshShape);
	EXPORT btSliderConstraint* btWorldImporter_createSliderConstraint(btWorldImporter* obj, btRigidBody* rbA, btRigidBody* rbB, const btTransform* frameInA, const btTransform* frameInB, bool useLinearReferenceFrameA);
	EXPORT btSliderConstraint* btWorldImporter_createSliderConstraint2(btWorldImporter* obj, btRigidBody* rbB, const btTransform* frameInB, bool useLinearReferenceFrameA);
	EXPORT btCollisionShape* btWorldImporter_createSphereShape(btWorldImporter* obj, btScalar radius);
	EXPORT btStridingMeshInterfaceData* btWorldImporter_createStridingMeshInterfaceData(btWorldImporter* obj, btStridingMeshInterfaceData* interfaceData);
	EXPORT btTriangleInfoMap* btWorldImporter_createTriangleInfoMap(btWorldImporter* obj);
	EXPORT btTriangleIndexVertexArray* btWorldImporter_createTriangleMeshContainer(btWorldImporter* obj);
	EXPORT void btWorldImporter_deleteAllData(btWorldImporter* obj);
	EXPORT btOptimizedBvh* btWorldImporter_getBvhByIndex(btWorldImporter* obj, int index);
	EXPORT btCollisionShape* btWorldImporter_getCollisionShapeByIndex(btWorldImporter* obj, int index);
	EXPORT btCollisionShape* btWorldImporter_getCollisionShapeByName(btWorldImporter* obj, const char* name);
	EXPORT btTypedConstraint* btWorldImporter_getConstraintByIndex(btWorldImporter* obj, int index);
	EXPORT btTypedConstraint* btWorldImporter_getConstraintByName(btWorldImporter* obj, const char* name);
	EXPORT const char* btWorldImporter_getNameForPointer(btWorldImporter* obj, const void* ptr);
	EXPORT int btWorldImporter_getNumBvhs(btWorldImporter* obj);
	EXPORT int btWorldImporter_getNumCollisionShapes(btWorldImporter* obj);
	EXPORT int btWorldImporter_getNumConstraints(btWorldImporter* obj);
	EXPORT int btWorldImporter_getNumRigidBodies(btWorldImporter* obj);
	EXPORT int btWorldImporter_getNumTriangleInfoMaps(btWorldImporter* obj);
	EXPORT btCollisionObject* btWorldImporter_getRigidBodyByIndex(btWorldImporter* obj, int index);
	EXPORT btRigidBody* btWorldImporter_getRigidBodyByName(btWorldImporter* obj, const char* name);
	EXPORT btTriangleInfoMap* btWorldImporter_getTriangleInfoMapByIndex(btWorldImporter* obj, int index);
	EXPORT int btWorldImporter_getVerboseMode(btWorldImporter* obj);
	EXPORT void btWorldImporter_setDynamicsWorldInfo(btWorldImporter* obj, const btVector3* gravity, const btContactSolverInfo* solverInfo);
	EXPORT void btWorldImporter_setVerboseMode(btWorldImporter* obj, int verboseMode);
	EXPORT void btWorldImporter_delete(btWorldImporter* obj);
#ifdef __cplusplus
}
#endif
