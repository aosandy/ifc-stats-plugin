/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
class IFCQUERY_EXPORT IfcLabel;
class IFCQUERY_EXPORT IfcRepresentation;
//ENTITY
class IFCQUERY_EXPORT IfcRepresentationContext : public BuildingEntity
{ 
public:
	IfcRepresentationContext() = default;
	IfcRepresentationContext( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 2; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcRepresentationContext"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationContext -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcLabel>						m_ContextIdentifier;		//optional
	shared_ptr<IfcLabel>						m_ContextType;				//optional
	// inverse attributes:
	std::vector<weak_ptr<IfcRepresentation> >	m_RepresentationsInContext_inverse;
};

