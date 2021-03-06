/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement.h"
#include "ifcpp/IFC4/include/IfcCoordinateOperation.h"
#include "ifcpp/IFC4/include/IfcDimensionCount.h"
#include "ifcpp/IFC4/include/IfcDirection.h"
#include "ifcpp/IFC4/include/IfcGeometricProjectionEnum.h"
#include "ifcpp/IFC4/include/IfcGeometricRepresentationContext.h"
#include "ifcpp/IFC4/include/IfcGeometricRepresentationSubContext.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcPositiveRatioMeasure.h"
#include "ifcpp/IFC4/include/IfcReal.h"
#include "ifcpp/IFC4/include/IfcRepresentation.h"

// ENTITY IfcGeometricRepresentationSubContext 
IfcGeometricRepresentationSubContext::IfcGeometricRepresentationSubContext( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcGeometricRepresentationSubContext::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcGeometricRepresentationSubContext> copy_self( new IfcGeometricRepresentationSubContext() );
	if( m_ContextIdentifier ) { copy_self->m_ContextIdentifier = dynamic_pointer_cast<IfcLabel>( m_ContextIdentifier->getDeepCopy(options) ); }
	if( m_ContextType ) { copy_self->m_ContextType = dynamic_pointer_cast<IfcLabel>( m_ContextType->getDeepCopy(options) ); }
	if( m_CoordinateSpaceDimension ) { copy_self->m_CoordinateSpaceDimension = dynamic_pointer_cast<IfcDimensionCount>( m_CoordinateSpaceDimension->getDeepCopy(options) ); }
	if( m_Precision ) { copy_self->m_Precision = dynamic_pointer_cast<IfcReal>( m_Precision->getDeepCopy(options) ); }
	if( m_WorldCoordinateSystem ) { copy_self->m_WorldCoordinateSystem = dynamic_pointer_cast<IfcAxis2Placement>( m_WorldCoordinateSystem->getDeepCopy(options) ); }
	if( m_TrueNorth ) { copy_self->m_TrueNorth = dynamic_pointer_cast<IfcDirection>( m_TrueNorth->getDeepCopy(options) ); }
	if( m_ParentContext ) { copy_self->m_ParentContext = dynamic_pointer_cast<IfcGeometricRepresentationContext>( m_ParentContext->getDeepCopy(options) ); }
	if( m_TargetScale ) { copy_self->m_TargetScale = dynamic_pointer_cast<IfcPositiveRatioMeasure>( m_TargetScale->getDeepCopy(options) ); }
	if( m_TargetView ) { copy_self->m_TargetView = dynamic_pointer_cast<IfcGeometricProjectionEnum>( m_TargetView->getDeepCopy(options) ); }
	if( m_UserDefinedTargetView ) { copy_self->m_UserDefinedTargetView = dynamic_pointer_cast<IfcLabel>( m_UserDefinedTargetView->getDeepCopy(options) ); }
	return copy_self;
}
void IfcGeometricRepresentationSubContext::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCGEOMETRICREPRESENTATIONSUBCONTEXT" << "(";
	if( m_ContextIdentifier ) { m_ContextIdentifier->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ContextType ) { m_ContextType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_CoordinateSpaceDimension ) { m_CoordinateSpaceDimension->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Precision ) { m_Precision->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_WorldCoordinateSystem ) { m_WorldCoordinateSystem->getStepParameter( stream, true ); } else { stream << "*" ; }
	stream << ",";
	if( m_TrueNorth ) { stream << "#" << m_TrueNorth->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_ParentContext ) { stream << "#" << m_ParentContext->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_TargetScale ) { m_TargetScale->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TargetView ) { m_TargetView->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_UserDefinedTargetView ) { m_UserDefinedTargetView->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcGeometricRepresentationSubContext::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcGeometricRepresentationSubContext::toString() const { return L"IfcGeometricRepresentationSubContext"; }
void IfcGeometricRepresentationSubContext::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 10 ){ std::stringstream err; err << "Wrong parameter count for entity IfcGeometricRepresentationSubContext, expecting 10, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_ContextIdentifier = IfcLabel::createObjectFromSTEP( args[0], map );
	m_ContextType = IfcLabel::createObjectFromSTEP( args[1], map );
	m_CoordinateSpaceDimension = IfcDimensionCount::createObjectFromSTEP( args[2], map );
	m_Precision = IfcReal::createObjectFromSTEP( args[3], map );
	m_WorldCoordinateSystem = IfcAxis2Placement::createObjectFromSTEP( args[4], map );
	readEntityReference( args[5], m_TrueNorth, map );
	readEntityReference( args[6], m_ParentContext, map );
	m_TargetScale = IfcPositiveRatioMeasure::createObjectFromSTEP( args[7], map );
	m_TargetView = IfcGeometricProjectionEnum::createObjectFromSTEP( args[8], map );
	m_UserDefinedTargetView = IfcLabel::createObjectFromSTEP( args[9], map );
}
void IfcGeometricRepresentationSubContext::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcGeometricRepresentationContext::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "ParentContext", m_ParentContext ) );
	vec_attributes.emplace_back( std::make_pair( "TargetScale", m_TargetScale ) );
	vec_attributes.emplace_back( std::make_pair( "TargetView", m_TargetView ) );
	vec_attributes.emplace_back( std::make_pair( "UserDefinedTargetView", m_UserDefinedTargetView ) );
}
void IfcGeometricRepresentationSubContext::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcGeometricRepresentationContext::getAttributesInverse( vec_attributes_inverse );
}
void IfcGeometricRepresentationSubContext::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationContext::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcGeometricRepresentationSubContext> ptr_self = dynamic_pointer_cast<IfcGeometricRepresentationSubContext>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcGeometricRepresentationSubContext::setInverseCounterparts: type mismatch" ); }
	if( m_ParentContext )
	{
		m_ParentContext->m_HasSubContexts_inverse.emplace_back( ptr_self );
	}
}
void IfcGeometricRepresentationSubContext::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationContext::unlinkFromInverseCounterparts();
	if( m_ParentContext )
	{
		std::vector<weak_ptr<IfcGeometricRepresentationSubContext> >& HasSubContexts_inverse = m_ParentContext->m_HasSubContexts_inverse;
		for( auto it_HasSubContexts_inverse = HasSubContexts_inverse.begin(); it_HasSubContexts_inverse != HasSubContexts_inverse.end(); )
		{
			weak_ptr<IfcGeometricRepresentationSubContext> self_candidate_weak = *it_HasSubContexts_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_HasSubContexts_inverse;
				continue;
			}
			shared_ptr<IfcGeometricRepresentationSubContext> self_candidate( *it_HasSubContexts_inverse );
			if( self_candidate.get() == this )
			{
				it_HasSubContexts_inverse= HasSubContexts_inverse.erase( it_HasSubContexts_inverse );
			}
			else
			{
				++it_HasSubContexts_inverse;
			}
		}
	}
}
